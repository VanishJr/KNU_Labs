#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char C;
    int B;
    cin >> C;
    cin >> B;

    for (int k = B; k >= 0; k--) {
        for (int i = 0; i < k; i++) {
            cout << C;
        }
        cout << "\n";
    }
    return 0;
}