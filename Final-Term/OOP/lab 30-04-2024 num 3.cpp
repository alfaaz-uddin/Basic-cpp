#include <iostream>

using namespace std;

class Student {
private:
    int roll_num;
    float cgpa;
    int marks;
    int age;

public:
    void setValues(int r, float cg, int mark, int ag) {
        roll_num = r;
        cgpa = cg;
        marks = mark;
        age = ag;
    }

    void display() {
        cout << "Roll Number: " << roll_num << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    Student alice, bob;


    alice.setValues(1001, 3.45, 78, 20);
    bob.setValues(1002, 3.58, 88, 21);


    cout << "Details of Alice:" << endl;
    alice.display();
    cout << endl;

    cout << "Details of Bob:" << endl;
    bob.display();


}
