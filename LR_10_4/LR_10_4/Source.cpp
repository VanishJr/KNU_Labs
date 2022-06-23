#include <iostream>
using namespace std;

int main()
{
	int i, Q = 1, a[7] = { -4, -3, 5, -7, 4, -5, 2 };
	for (i = 0; i < 7; ++i)
		if (a[i] % 2 != 0 || a[i] < 0) { Q = Q * abs(a[i]); }
		cout << "Q = " << Q;
}
