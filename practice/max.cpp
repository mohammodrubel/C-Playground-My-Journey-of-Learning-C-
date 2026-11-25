// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n;
//    cin >> n;
//    int a[n];

//     for(int i = 0; i< n; i++){
//         cin >> a[i];
//     }

//     int maxValue = a[0] ;
//     int minvalue = a[0];

//     for(int i = 0; i< n; i++){
//         if(maxValue < a[i]){
//             maxValue = a[i];
//         }
//         if(minvalue > a[i]){
//             minvalue = a[i];
//         }
//     }
//     cout << minvalue << " " << maxValue;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;

  int minValue = min({a,b,c});
  int maxValue = max({a,b,c});

    cout << minValue << " " << maxValue;

    return 0;
}
