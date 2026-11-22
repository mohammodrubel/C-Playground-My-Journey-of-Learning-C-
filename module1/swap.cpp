#include <iostream>
#include <algorithm>
using namespace std;
    int main(){
        int a,b;
        cin >> a >> b;
        
        // according to c program 
        // int temp = a;
        // a = b ;
        // b = temp ;

        swap(a,b);
        cout  << a << " " << b <<endl;
        
        
       
    }