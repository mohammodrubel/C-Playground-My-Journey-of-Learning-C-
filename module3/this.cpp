// if we get input for user 
#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student (int role, int cls ,double gpa){
        this->roll =role;
        this->cls = cls;
        this->gpa = gpa;
        // OR
        // (*this).roll =role;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
    }
   
};

int main() {
    
    Student rahim(45,9,3.00);
    Student karim(4,9,4.00);
   

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa <<endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa <<endl;
    return 0;
}