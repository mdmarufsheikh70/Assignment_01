#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int x, y;
    cin >> x >> y;
    int square = 1;
    for(int i = 0; i < y; i++) {
        square = square*x;
    }
    cout << square << endl;
    // cout << pow(x, y) << endl;
    return 0;
}