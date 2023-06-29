//Problem Link: https://open.kattis.com/problems/cold
#include <iostream>
using namespace std;
int main() {
    int N; cin >> N;
    int count = 0;
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        if (num < 0) count++;
    }
    cout << count;
}
