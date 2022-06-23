#include <iostream>
#define n 5
#define m 10
using namespace std;

int main()
{
    int s;
    cin >> s;
    while ((s > m) || (s < n))
    {
        cout << "NO";
        cin >> s;
    }
    int a, b;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;


    int x[m], y[m], res[m];
    cout << "arrays:\n";
    for (int i = 0; i < s; i++)
    {
        x[i] = rand() % (b - a + 1) + a;
        cout << "\t" << x[i];
    }
    cout << "\n";
    for (int i = 0; i < s; i++)
    {
        y[i] = rand() % (b - a + 1) + a;
        cout << "\t" << y[i];
    }
    for (int i = 0; i < s; i++)
        res[i] = x[i] * y[i];
    cout << "\nres:\n";
    for (int i = 0; i < s; i++)
    {
        cout << "\t" << res[i];
    }
    return 0;
}
