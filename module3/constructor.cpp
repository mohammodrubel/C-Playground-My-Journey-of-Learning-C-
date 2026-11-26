// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     int roll;
//     int cls;
//     double gpa;

//     Student(int userRoll, int userClass , double userGpa){
//         roll = userRoll;
//         cls = userClass;
//         gpa = userGpa;
//     }
// };

// int main() {
    
//     Student rahim(45 , 5 , 3.25);
//     Student karim(50,6,2.00);

//     cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa <<endl;
//     cout << karim.roll << " " << karim.cls << " " << karim.gpa <<endl;
//     return 0;
// }

// if we get input for user 
#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

   
};

int main() {
    
    Student rahim;
    Student karim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    cin >> karim.roll >> karim.cls >> karim.gpa;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa <<endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa <<endl;
    return 0;
}