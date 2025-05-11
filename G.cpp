#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);

int main() {
  int n;
  cin >> n;
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int abc = a * 100 + b *10 + c;
    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;

    cout << abc + bca + cab <<endl;

    return 0;
}