#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int x, y;
    cin >> x >> y;
    if(x >= 2 && y >= 2) {
        cout << (int(pow(x, y)) + int(pow(y, x))) << endl;
    } else {
        return -1;
    }
    return 0;
}