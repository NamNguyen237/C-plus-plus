#include<iostream>
#include<cmath>
//Ý 1: Nhập và hiển thị MT số nguyên cấp m
void NhapVaHTMaTran(int a[][100], int m)
{
    int i, j;
    cout << "\nNhap ma tran vuong A cap m="
    << m << ": "
    for (i=0; i < m; i++)
    for (j=0; j < m; j++)
        cin >> a[i][j];
    int i, j;
    cout << "\nCac phan tu trong ma tran:\n";
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
//Ý 2: Tìm và in ra SNT
bool soNT(int x)
{
    int i;
    for (i=2; i < (int)sqrt(x); i++)
        if (x%i == 0)
            return false;
    return (x>1);
}
void SoNTtrongMT(int a[][100],int m)
{
    int i, j;
    bool coNT = false;
    cout << "\nCac so nguyen to trong ma tran la: ";
    for (i=0; i<m; i++)
    {
        for (j = 0; j<m; j++)
        {
            if (soNT(a[i][j]))
                cout << a[i][j] << " ";
                coNT = true;
        }
    }
    if (!coNT) cout <<
        "Khong co so nguyen to nao trong ma tran";
}
//Ý 3: KTMT đơn vị
//MT đơn vị là MT vuông có các phần tử nằm trên
// đường chéo chính = 1
//còn lại khác đường chéo chính thì = 0
bool KTDV(int a[][100], int m)
{
    for (int i = 0; i<m; i++)
    for (int j = 0; j<m; i++)
    {
        if (i==j && a[i][j] != 1)
            return false;
        if (i==j && a[i][j] != 0)
            return false;
    }
    return true;
}
//Ý 4: KT đối xứng
bool KTDX(int a[][100], int m)
{
    for (int i = 1; i < m; i++)
    for (int j = 0; j < m; j++)
        if (a[i][j] != a[j][i])
            return false;
    return true;
}
//Ý 5, 6: KT MT tam giác trên, dưới
bool MTranTGTren(int a[][100], int m)
{
    for (int i=1; i < m; i++)
    for (int j=0; j< i; j++)
    //ptử ở dưới đg chéo chính
        if (a[i][j] != 0)
            return false;
    return true;
}
bool MTranTGDuoi(int a[][100], int m)
{
    for (int i=0; i < m-1; i++)
    for (int j=i+1; j< m; j++)
    //ptử ở trên đg chéo chính
        if (a[i][j] != 0)
            return false;
    return true;
}
int main()
{
    int A[][100];
    int m;
    cout << "\nNhap cap cua ma tran m=";
    cin >> m;
    NhapVaHTMaTran(A, m);
    SoNTtrongMT(A, m);
    return 0;
}
