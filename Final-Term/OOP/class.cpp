#include<iostream>
using namespace std;

  class student{
private:
    string name;
    int id;
    double cgpa;
    string dateOfBirth;
    string bloodGroup;

public:
    Student(){
        name= "none";
        id=-1;
        cgpa=0.0;
        dateOfBirth="N/A";
        bloodGroup="N/A";

    }
    student(string n, int i, double cg, string dob, string bg){
    name=n;
    id=i;
    dateOfBirth=dob;
    bloodGroup=bg;
    }

   /* void setName(string n){name=n;}
    void setId(int i){id=i;}
    void setCgpa(double cg){cgpa=cg;}
    void setDateOfBirth(string dob){dateOfBirth=dob;}
    void setBloodGroup(string bg){bloodGroup=bg;}   */
    };
