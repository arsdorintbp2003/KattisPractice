//Problem Link: https://open.kattis.com/problems/encodedmessage
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    while (N > 0) {
        string t; cin >> t;
        int size = (int)sqrt(t.size());
        vector<vector<char>> vec(size, vector<char>(size));
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                vec[i][j] = t[size * j + size - i - 1];
                cout << vec[i][j];
            }
        }
        N--;
        cout << endl;
    }
}
