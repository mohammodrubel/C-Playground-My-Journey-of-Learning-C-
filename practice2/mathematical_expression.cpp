#include <bits/stdc++.h>
using namespace std;

    int main (){
       int A;
       char S;
       int B;
       char Q;
       int C;

     

        cin >> A >> S >> B >> Q >> C ;

        if(S == '+' && A + B == C){
            cout << "Yes";
        }else if(S == '+' && A + B != C){
            cout << A+B;
        }else if(S == '-' && A - B == C){
            cout << "Yes";
        }else if(S == '-' && A - B != C){
            cout << A-B ;
        }else if(S == '*' && A * B == C){
            cout << "Yes";
        }else if(S == '*' && A * B != C){
            cout << A*B ;
        }

        return 0;

    }