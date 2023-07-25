//Problem Link: https://open.kattis.com/problems/fallingapart
allingapart.cpp
 Download file
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
        int n; cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];
        sort(vec.begin(), vec.end());
        int sumA = 0; int  sumB = 0;
        for (int i = n - 1; i >= 0; i -= 2) sumA += vec[i];
        for (int i = n - 2; i >= 0; i -= 2) sumB += vec[i];
        cout << sumA << " " << sumB;
}
