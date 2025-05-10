#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);

int main() {
    optimize();
    int n;
    cin >> n;
    cout << "k";
    int towdigits = n % 100;
    if (towdigits < 10) {
        cout << "0";
    }
    cout << towdigits;
    cout << endl;
    return 0;
}

