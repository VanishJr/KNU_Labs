#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "n:";
    cin >> n;
    cout << "m:";
    cin >> m;
    int a, b;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;

    int** x = new int* [n];
    for (int i = 0; i < n; i++)
        x[i] = new int[m];
    cout << "arrays:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            x[i][j] = rand() % (b - a + 1) + a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << x[i][j] << "\t";
        cout << "\n";
    }

    int* sum = new int[n];
    for (int i = 0; i < n; i++)
        sum[i] = 0;

    int max_sum = -1, max_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum[i] != -1)
        {
            for (int j = 0; j < m; j++)
            {
                sum[i] += x[i][j];
                if (x[i][j] < 0)
                    sum[i] = -1;//для того щоб відсіяти рядки які мають від'ємні елементи будем їх "помічати" -1
            }
            max_sum = sum[i];
            max_i = i;
        }
    }
    cout << "\nMax n:" << max_i;
    return 0;
}