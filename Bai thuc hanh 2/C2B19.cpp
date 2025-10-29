#include<iostream>
using namespace std;

int main()
{
    int n;
    float duong, am, x;
    do{
        cout << "\nNhap so phan tu cua day so: ";
        cin >> n;
    } while (n <= 0);
    int cnt = 1;
    duong = am = 0;
    int cnt_duong, cnt_am;
    cnt_duong = cnt_am = 0;
    while (cnt <= n)
    {
        cout << "\nNhap so thu " << cnt << ": ";
        cin >> x;
        if (x > 0)
        {
            duong += x;
            cnt_duong++;
        }
        else{
            am += x;
            cnt_am++;
        }
        cnt += 1;
    }
    cout << "TBC cua cac so duong trong day so nhap vao tu ban phim la: " << duong/cnt_duong << endl;
    cout << "TBC cua cac so am trong day so nhap vao tu ban phim la: " << am/cnt_am << endl;
    return 0;
}
