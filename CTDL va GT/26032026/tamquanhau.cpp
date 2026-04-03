#include <iostream>
using namespace std;

//#define N 4

// In kết quả
void inKQ(int mang[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << mang[i][j] << " ";
        cout << endl;
    }
}

// Kiểm tra có thể đặt hậu tại (hang, cot)
bool kiemTra(int mang[N][N], int hang, int cot) {

    // Kiểm tra cột
    for (int i = 0; i < hang; i++)
        if (mang[i][cot] == 1)
            return false;

    // Kiểm tra đường chéo chính (chéo trái trên)
    for (int i = hang - 1, j = cot - 1; i >= 0 && j >= 0; i--, j--)
        if (mang[i][j] == 1)
            return false;

    // Kiểm tra đường chéo phụ (chéo phải trên)
    for (int i = hang - 1, j = cot + 1; i >= 0 && j < N; i--, j++)
        if (mang[i][j] == 1)
            return false;

    return true;
}

// Hàm đặt hậu (Backtracking)
bool datThu(int mang[N][N], int hang) {

    if (hang == N)   // Đã đặt đủ N hậu
        return true;

    for (int cot = 0; cot < N; cot++) {

        if (kiemTra(mang, hang, cot)) {

            mang[hang][cot] = 1;  // Đặt hậu

            if (datThu(mang, hang + 1))
                return true;

            mang[hang][cot] = 0;  // quay lui
        }
    }

    return false;
}

// Khởi tạo ma trận
void khoitao(int mang[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            mang[i][j] = 0;
}

int main() 
{
    for (int i = 1; i < 9; i++)
    {
        #define N i
        int mang[N][N];
        khoitao(mang);
        cout << "\nVoi N = " << i << ": \n";
        if (!datThu(mang, 0)) {
        cout << "Khong co giai phap";
        inKQ(mang);
        }
    }

    

    return 0;
}