#include <iostream>
#include <vector>
using namespace std;

#define int long long

signed main() {
    int a, b;
    cin >> a >> b;
    vector<int> p(a), q(b);
    for(int i = 0; i < a; i++) cin >> p[i];
    for(int i = 0; i < b; i++) cin >> q[i];

    vector<string> v(10, "x");
    for(int i = 0; i < a; i++) v[p[i]] = ".";
    for(int i = 0; i < b; i++) v[q[i]] = "o";

    for(int i = 7; i <= 10; i++) cout << v[i % 10] << " "; cout << endl;
    for(int i = 4; i < 7; i++) cout << " " << v[i]; cout << endl;
    cout << "  ";
    for(int i = 2; i < 4; i++) cout << v[i] << " "; cout << endl;
    cout << "   " << v[1] << endl;
    return 0;
}