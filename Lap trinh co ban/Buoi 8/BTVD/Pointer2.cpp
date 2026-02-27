#include<iostream>
using namespace std;
//Xét chương trình sau
//Cho biết câu lệnh nào đúng (true)/sai(false)
//Nếu đúng cho biết kết quả khi chạy
//Nếu sai, đưa ra phương án sửa
int main()
{
    int n = 10; //true
                /*kết quả khi chạy sẽ
                khai báo biến nguyên n = 10
                */

    int *p;//true
            /*kết quả khi chạy sẽ
            khai báo con trỏ nguyên p
            */

    float pi = 3.14; //true
                    /*kết quả khi chạy sẽ
                khai báo biến số thực pi = 3.14
                */

    float *t;//true
            /*kết quả khi chạy sẽ
            khai báo con trỏ số thực t
            */

    cout << "\nn = " << n;//true
                    /*kết quả khi chạy sẽ
                in ra trên màn hình n = 10
                    */
    p = n;//false vì n là biến nguyên, p là con trỏ
        //sửa lại thành p = &n

    p = &n; //true
            /*kết quả khi chạy sẽ
            gán địa chỉ biến n vào con trỏ p
            */

    p = *n; //false vì n là biến nguyên, không phải con trỏ
            //-sửa lại thành p = &n hoặc *p = n

    t = pi;//false vì pi là biến thực, t là con trỏ
            //-sửa lại thành t = &pi

    t = *pi; //false vì pi là biến thực, t là con trỏ
                //-sửa lại thành t = &pi

    t = &pi;//true
            /*kết quả khi chạy sẽ
            gán địa chỉ biến pi vào con trỏ t
            */

    cout << "\npi = " << pi; //true
                            /*kết quả khi chạy sẽ
                            in ra pi = 3.140000
                            */

    cout << "\np = " << p;//true
                            /*kết quả khi chạy sẽ
                            in ra p = <địa chỉ mà con trỏ p đang được gán>
                            */

    cout << "\n*p = " << *p; //true
                            /*kết quả khi chạy sẽ
                            in ra *p = <giá trị ô nhớ mà con trỏ p đang được gán>
                            tức là *p = 10
                            */

    cout << "\n&p = " << &p; //false vì p là một con trỏ, không phải một biến giá trị
                            /*sửa lại thành *p = *p nếu muốn
                            in giá trị của ô nhớ mà p trỏ tới
                            hoặc p = p nếu muốn in địa chỉ mà con trỏ p
                            đang trỏ tới
                            */
    p = *pi; //false vì pi là biến số thực, không phải con trỏ
            // và pi là biến số thực trong khi p là con trỏ số nguyên
            //sửa: t = &pi
    p = &pi; //false vì pi là biến số thực trong khi p là con trỏ số nguyên
            //sửa: t = &pi
    p = pi;//false vì pi là biến số thực, không phải con trỏ
            // và pi là biến số thực trong khi p là con trỏ số nguyên
            //sửa: t = &pi
    return 0;
}
