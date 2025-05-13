#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    long long int x, y;
    cin >> x >> y;
    cout << ((x + y - 1) / y) << endl;
    return 0;
}