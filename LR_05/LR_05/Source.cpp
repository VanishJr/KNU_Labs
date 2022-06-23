#include<iostream>
#include<fstream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    int m, n, k;
    cout << "m: ";
    cin >> m;
    cout << "n: ";
    cin >> n;
    cout << "k: ";
    cin >> k;
    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        cout << (rand() % 123) - 11 << "\t";
        if (((i + 1) % k) == 0)
            cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        float x = float(rand() % 5000 + 2000) / 1000;
        cout << x << "\t";
        if (((i + 1) % k) == 0)
            cout << "\n";
    }
    
    return 0;
}
