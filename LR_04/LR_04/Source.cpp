#include<iostream>
#include<fstream>
#include<string>
#include<math.h>

using namespace std;


int main()
{
    int n;
    char answer = 'y';
    double a, b, h, sum;
    cout << "\nEnter the number of parts: ";
    cin >> n;
    cout << "Enter first coord: ";
    cin >> a;
    cout << "Enter second coord: ";
    cin >> b;
    h = (b - a) / n;
    sum = 0.5 * (f(a) + f(b));

    for (int i = 1; i < n; i++)
        sum += f(a + i * h);
    sum *= h;
    std::cout << "Intergral [" << a << " , " << b << "] is ";
    cout << sum << endl;

    cout << "\nDo you want to repeat? [y/n]" << endl;
    cin >> answer;

    if (answer == 'y')
    {
        main();
    }
    else if (answer == 'n')
    {
        exit(0);
    }
}