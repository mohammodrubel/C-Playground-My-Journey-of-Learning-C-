
#include <bits/stdc++.h>
using namespace std;

// static array 

    // int main(){
    //     int x[3];
    //         for(int i = 0; i<3; i++){
    //             cin >> x[i] ;
    //         }

    //         int b[5];

    //         for(int i = 0; i<3; i++){
    //             b[i] = x[i];
    //         }
    //         b[3] = 40;
    //         b[4] = 50;
    //         for(int i = 0; i<5; i++){
    //             cout << b[i] << " " ;
    //         }
    // }



    // dynamic array

    int main(){
        int  * x = new int[3];
            for(int i = 0; i<3; i++){
                cin >> x[i] ;
            }

            int *b = new int [5];

            for(int i = 0; i<3; i++){
                b[i] = x[i];
            }
            b[3] = 40;
            b[4] = 50;
            delete[] x;
            for(int i = 0; i<5; i++){
                cout << b[i] << " " ;
            }
    }