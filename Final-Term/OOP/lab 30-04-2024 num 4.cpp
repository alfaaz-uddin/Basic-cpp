#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    float monthlySalary;
public:

    Employee(string n, int id, float salary) {
        name = n;
        employeeID = id;
        monthlySalary = salary;
    }

    float calculateAnnualSalary() {
        return monthlySalary * 12;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Monthly Salary: " << monthlySalary << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main() {

    Employee emp("Mr. X", 10001, 4000.0);


    emp.displayDetails();


}
