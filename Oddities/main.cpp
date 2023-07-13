//Problem link: https://open.kattis.com/problems/oddities
#include <iostream>
using namespace std;
int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        (num % 2 == 0) ? cout << num << " is even" << endl 
        : cout << num << " is odd" << endl;
    }
}
