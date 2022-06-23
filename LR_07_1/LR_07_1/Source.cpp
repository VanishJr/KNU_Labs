#include<iostream>
#include<fstream>
#include<string>
#include<math.h>

using namespace std;

double f(double x)
{
    return (2 * 2 * sin(x) * cos(x) - 1);
}
void lab4();
void lab5();
int rands(int a, int b) { return rand() % (b - a + 1) + a; }
void menu();

int main()
{
    menu();
    return 0;
}

void lab4()
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
        lab4();
    }
    else if (answer == 'n')
    {
        exit(0);
    }
}
void lab5()
{
    int m, n, k;
    cout << "m: ";//������� �����
    cin >> m;
    cout << "n: ";
    cin >> n;
    cout << "k: ";
    cin >> k;
    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        cout << (rand() % 123) - 11 << "\t";//������ ����� �������� �����. ������� ���� ������ �� 0 �� ����� �� �������.
        if (((i + 1) % k) == 0)
            cout << "\n";//������ ����� �����, ���� �� ������� � ��������
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        float x = float(rand() % 5000 + 2000) / 1000;//����� �� �� ���� ������ ���� �����, ���� ����� ������������ � ����� � �����.
        cout << x << "\t";
        if (((i + 1) % k) == 0)//������ ����� �����, ���� �� ������� � ��������
            cout << "\n";
    }
}
void menu()
{
    int in;
    int tmp1, tmp2;
    do
    {
        cout << "\nQuit - 1\n";
        cout << "f(formula for integral) - 2\n";
        cout << "rands - 3\n";
        cout << "lab4 - 4\n";
        cout << "lab5 - 5\n";
        cin >> in;
        if (in == 1)
            break;
        if (in == 2)
        {
            cin >> tmp1;
            cout << f(tmp1);
        }
        if (in == 3)
        {
            cout << "a:";
            cin >> tmp1;
            cout << "b:";
            cin >> tmp2;
            cout << rands(tmp1, tmp2);
        }
        if (in == 4)
            lab4();
        if (in == 5)
            lab5();
    } while (true);
}