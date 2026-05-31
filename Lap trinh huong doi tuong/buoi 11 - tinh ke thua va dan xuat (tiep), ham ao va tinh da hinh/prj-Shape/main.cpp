#include <iostream>
#include "shape.h"
#include "twodimshape.h"
#include "threedimshape.h"
#include "circle.h"
#include "cylinder.h"
#include "square.h"
#include "triangle.h"
#include "rectangle.h"
#include "diamond.h"
#include "sphere.h"
#include "cube.h"
#include "box.h"
#include "cone.h"

using namespace std;
/*
int main()
{
    Shape *A;
    TwoDimShape *B;
    ThreeDimShape *C;

    Circle circle_obj;
    Cylinder cylinder_obj;

    circle_obj.init();
    circle_obj.show();

    cylinder_obj.init();
    cylinder_obj.show();


    A = &circle_obj;
    A->show();

    A = &cylinder_obj;
    A->show();

    return 0;
}
*/
int main()
{
    Shape *array[10];
    array[0] = new Circle;
    array[1] = new Square;
    array[2] = new Triangle;
    array[3] = new Rectangle;
    array[4] = new Diamond;
    array[5] = new Sphere;
    array[6] = new Cylinder;
    array[7] = new Cube;
    array[8] = new Box;
    array[9] = new Cone;
    
    int i;
    cout << "\nNhap thong tin cac doi tuong";
    for (i=0; i<10; i++)
        array[i]->init();

    cout << "\nCac doi tuong trong mang";
    for (i=0; i<10; i++) {
        array[i]->show();
        cout << "\nNhap Enter de tiep tuc ";
        cin.get();
    }

    for (i=9; i>=0; i--) {
        delete array[i];
    }
    return 0;
}
