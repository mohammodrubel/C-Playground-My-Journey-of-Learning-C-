
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public : 
//     char name[100];
//     int roll;
//     double gpa;
// };

// int main() {
//     Student a;
//     a.roll = 100;
//     a.gpa = 3.45;
//     char temp[100] = "sakib";
//     strcpy(a.name,temp);

    
//     cout << a.name << "\n" << a.roll << "\n" << a.gpa << endl;

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public : 
//     char name[100];
//     int roll;
//     double gpa;
// };

// int main() {
//     Student a,b;
//     cin >> a.name >> a.roll >> a.gpa;
//     cin >> b.name >> b.roll >> b.gpa;
//     cout << a.name << "\n" << a.roll << "\n" << a.gpa << endl;
//     cout << b.name << "\n" << b.roll << "\n" << b.gpa << endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << "\n" << a.roll << "\n" << a.gpa << endl;

    cout << "\n" << b.name << "\n" << b.roll << "\n" << b.gpa << endl;

    return 0;
}