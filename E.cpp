#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double with_realpart = double(a) / double(b);
    cout << a / b <<" "<< a % b <<" "<< fixed << setprecision(5)<< with_realpart<<endl;
    return 0;
}