#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b, res;
    int max = 0;
    cout << "Write your line (ENG):" << endl;
    getline(cin, a);
    a = a + ' ';
    for (int i = 0; i < a.length(); i++)
    {
        b += a[i];
        if (!(isalpha(a[i])))
        {
            b.pop_back();
            if (b != "")
                if (b.length() > max)
                {
                    max = b.length();
                    res = b;
                }
            b = "";
        }
    }
    cout << "The longest word is: " << res << endl;
    system("pause");
    return 0;
}