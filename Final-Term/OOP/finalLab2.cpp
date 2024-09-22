#include<iostream>
using namespace std;

double Pi=3.14159;

double rectangleArea(double length, double width) {
    double area = length * width;
    return area;
}

double circleArea(double radius) {
    double area = Pi * radius * radius;
    return area;
}

double triangleArea(double base, double height) {
    double area = 0.5 * base * height;
    return area;
}

int main() {
int choice;
    cout<<"Choose a shape to calculate its area: "<<endl;
    cout<<"1. Rectangle"<<endl;
    cout<<"2. Circle"<<endl;
    cout<<"3. Triangle"<<endl;
    cin>>choice;

    switch (choice) {
        case 1: {
            double length, width;
            cout<<"Enter length and width of the rectangle: ";
            cin>>length >> width;
            cout<<"Area of the rectangle: "<<rectangleArea(length, width)<<endl;
            break;
        }
        case 2: {
            double radius;
            cout<<"Enter radius of the circle: ";
            cin>>radius;
            cout<<"Area of the circle: "<<circleArea(radius)<<endl;
            break;
        }
        case 3: {
            double base, height;
            cout<<"Enter base and height of the triangle: ";
            cin>>base>>height;
            cout<<"Area of the triangle: "<<triangleArea(base, height)<<endl;
            break;
        }
        default:
            cout << "Invalid choice!"<<endl;
    }
}

