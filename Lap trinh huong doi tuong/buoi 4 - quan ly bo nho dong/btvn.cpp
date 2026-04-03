#include <iostream>
#include <cmath>

using namespace std;

class ThreeDimPoint {
private:
    float x, y, z;

public:
    void init();
    void show();
    void move(float dx, float dy, float dz);
    float distance();
};

void ThreeDimPoint::init() {
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
    cout << "Nhap z: "; cin >> z;
}

void ThreeDimPoint::show() {
    cout << "(" << x << ", " << y << ", " << z << ")";
}

void ThreeDimPoint::move(float dx, float dy, float dz) {
    x = x + dx;
    y = y + dy;
    z = z + dz;
}

float ThreeDimPoint::distance() {
    return sqrt(x*x + y*y + z*z);
}

int main() {
    ThreeDimPoint A;

    A.init();
    
    cout << "Toa do x y z ban dau: ";
    A.show();
    cout << "\nOA = " << A.distance() << endl;

    // Dich chuyen x y z voi gia tri 5
    A.move(5, 5, 5);

    cout << "\nToa do sau khi dich chuyen (5, 5, 5): ";
    A.show();
    
    cout << "\nOA = " << A.distance() << endl;

    return 0;
}