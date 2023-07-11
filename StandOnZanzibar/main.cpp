//Problem Link: https://open.kattis.com/problems/zanzibar
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int TC; cin >> TC;
    vector<int> vec(100000);
    while (TC > 0) {
        int sum = 0;
        for (int i = 0; i < 100000; i++) {
            cin >> vec[i];
            if (vec[i] == 0) break;
            else if (i != 0 && vec[i] > vec[i - 1] * 2) 
                sum += vec[i] - vec[i - 1] * 2;
            
        }
        cout << sum << endl;
        TC--;
        vec.empty();
    }
}
