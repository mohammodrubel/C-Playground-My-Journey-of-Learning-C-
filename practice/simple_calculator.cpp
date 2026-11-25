#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x,y;
    cin >> x >> y;

    long long int stepOne = x + y;
    long long int stepTwo = x * y;
    long long int stepThree = x - y;

    cout << x <<" + "<<y<<" = " << stepOne <<"\n";
    cout << x <<" * "<<y<<" = " << stepTwo <<"\n";
    cout << x <<" - "<<y<<" = " << stepThree <<"\n";

    return 0;
}

