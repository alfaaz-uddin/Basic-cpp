#include<iostream>
using namespace std;

class Student{
private:
    string name; //member data/member variables/attributes
    int id;
    double cgpa;
    string bloodGroup;
    string dateOfBirth;
public:
    Student(){ //default/empty constructor
        cout<<"Default/empty constructor called."<<endl;
        name = "no name";
        id = -1;
        cgpa = 0.0;
        bloodGroup = "no blood group";
        dateOfBirth = "no date of birth";
    }
    Student(string n, int i, double c, string bg, string dob){
        cout<<"Parameterized constructor called."<<endl;
        name = n; //parameterized constructor
        id = i;
        cgpa = c;
        bloodGroup = bg;
        dateOfBirth = dob;
    }
    //setter functions
    void setName(string n){ name = n; }
    void setId(int i){ id = i; }
    void setCGPA(double c){ cgpa = c; }
    void setBloodGroup(string bg){ bloodGroup = bg; }
    void setDateOfBirth(string dob){ dateOfBirth = dob; }
    //getter functions
    string getName(){ return name; }
    int getId(){ return id; }
    double getCGPA(){ return cgpa; }
    string getBloodGroup(){ return bloodGroup; }
    string getDateOfBirth(){ return dateOfBirth; }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"Blood group: "<<bloodGroup<<endl;
        cout<<"Date of Birth: "<<dateOfBirth<<endl<<endl;
    }
    void scholarshipEligibility(){
        if(cgpa >= 3.75){
            cout<<name<<" is eligible for scholarship."<<endl<<endl;
        }else{
            cout<<name<<" is not eligible for scholarship."<<endl<<endl;
        }
    }
    ~Student(){
        cout<<name<<" deleted."<<endl;
    }
};

int main(){
    Student s1("Alfaz",101,3.5,"A+","2-JUL-2002");
    s1.show();
    s1.scholarshipEligibility();

    Student s4;

    Student s2("Sifur",102,3.8,"B+","24-APR-2003");
    s2.show();
    s2.scholarshipEligibility();

    Student s3;
    s3.show();
    s3.setName("Junayed");
    s3.setId(103);
    //s3.setCGPA(0);
    s3.setDateOfBirth("30-MAY-2004");
    s3.show();
    s3.setBloodGroup("AB+");
    s3.show();
    s3.setCGPA(3.3);
    s3.setName("Syed Junayed");
    //s3.show();
    cout<<s3.getCGPA()<<endl;
    s3.scholarshipEligibility();
}
