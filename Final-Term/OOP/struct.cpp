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
    void setInfo(string n, int i, double cg, string dob, string bg)
   {
        name= n;
        id=i;
        cgpa=cg;
        dateOfBirth=dob;
        bloodGroup=bg;
    }

    void showInifo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"Date of Birth: "<<dateOfBirth<<endl;
        cout<<"Blood group: "<<bloodGroup<<endl;
    }
  };

  int main(){
  student s1;
  s1.setInfo("Alfaz", 23555573, 3.5, "10Jan2003", "B+");
  s1.showInifo();
  }
