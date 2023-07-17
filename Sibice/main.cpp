//Problem Link: https://open.kattis.com/problems/sibice
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, W, H; cin >> N >> W >> H;
    vector<int>vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
        (vec[i] * vec[i] <= W * W + H * H) ? cout << "DA" 
        << endl : cout << "NE" << endl;
    }
}
