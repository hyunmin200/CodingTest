#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int i = 1, cpi = 1;

    while (true) {
        cpi = cpi + 6 * (i - 1);
        if (n <= cpi) {
            cout << i;
            break;
        }
        i++;
    }

    return 0;
}