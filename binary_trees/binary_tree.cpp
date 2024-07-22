#include <bits/stdc++.h>

// 11
// 8 4 9 2 10 5 11 1 6 3 7

void LVR(int v, int n) {
    if (v > n) {
        return;
    }
    // left 
    LVR(2 * v, n);
    std::cout << v << " ";
    // right
    LVR(2 * v + 1, n);
}

int main(){
    int n;
    std::cin >> n;
    LVR(1, n);
    return 0;
}