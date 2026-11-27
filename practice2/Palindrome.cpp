#include <bits/stdc++.h>
using namespace std;

    int main (){
       int n;
       cin >> n;
       int a[n];
       bool x = true;

        for(int i = 0; i<n; i++){
            cin >> a[i];
        }

        int j = n -1;

        for(int i = 0; i< n / 2; i++){
            if(a[i] !=  a[j]){
                x = false;
                break;
            }
            j--;
        }

        if(x == true){
            cout << "YES";
        }else{
            cout << "NO";
        }

        return 0;

    }