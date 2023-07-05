//Problem Link: https://open.kattis.com/problems/pet
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> point(5, vector<int>(4));
    int max = 0;
    int max_row = 0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> point[i][j];
            sum += point[i][j];
        }
        if (max < sum) {
            max = sum;
            max_row = i;
        }
    }
    cout << max_row + 1 << " " << max;
}
