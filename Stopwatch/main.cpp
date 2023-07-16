//Problem Link: https://open.kattis.com/problems/stopwatch
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    int sum = 0;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) cin >> vec[i];
    if (N % 2 == 1) cout << "still running";
    else {
        for (int i = 1; i < N; i += 2) sum += vec[i] - vec[i - 1];
        cout << sum;
    }
}
