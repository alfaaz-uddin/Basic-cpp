#include<iostream>
using namespace std;
double sq_area(double a)
{
    double area=a*a;
    return area;
}
double sq_peri(double b)
{
    double peri=4*b;
    return peri;
}
double rect_area(double c, double d)
{
    double area=c*d;
    return area;
}
double rect_peri(double e, double f)
{
    double peri=2*(e+f);
    return peri;
}
double circle_area(double g)
{
    double area=3.1416*g*g;
    return area;
}
double circle_peri(double h)
{
    double peri=2*3.1416*h*h;
    return peri;
}
int main()
{
    cout<<"Square area : "<<sq_area(5.2)<<endl;
    cout<<"Square perimeter : "<<sq_peri(5.9)<<endl;
    cout<<"Rectangle area : "<<rect_area(5.2,10.6)<<endl;
    cout<<"Rectangle perimeter : "<<rect_peri(6.3,2.8)<<endl;
    cout<<"Circle area : "<<circle_area(4.5)<<endl;
    cout<<"Circle perimeter : "<<circle_peri(2.4)<<endl;
}
