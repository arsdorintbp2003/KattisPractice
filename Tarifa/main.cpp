//Problem Link: https://open.kattis.com/problems/tarifa
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int X, N; cin >> X >> N;
    vector<int> vec(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
        sum += vec[i];
    }
    cout << X * (N + 1) - sum;
}
