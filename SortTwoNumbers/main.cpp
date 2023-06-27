//Problem Link: https://open.kattis.com/problems/sorttwonumbers
#include <iostream>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    (a < b) ? cout << a << " " << b : cout << b << " " << a;
}
