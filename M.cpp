#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cin.tie(0);

int main() {
    optimize();
    int w, x, y, z;
    cin >> w >> x;
    cin >> y >> z;
    cout << (w * y) + (x * z) <<endl;
    return 0;
}