#include <string>
#include <iostream>
#include <vector>
#define W 10

using namespace std;

int main()
{
	vector<int> x;

	for (int i = 0; i < W; i++)
		x.push_back(rand() % 10 - 5);
	int max = x[0], max_i = 0;
	for (int i = 0; i < W; i++)
	{
		cout << x[i] << "\t";
		if ((x[i] > max) && (x[i] % 3 == 0))
		{
			max = x[i];
			max_i = i;
		}
		if ((i + 1) % 5 == 0)
			cout << "\n";
	}
	int tmp = x[0];
	x[0] = x[max_i];
	x[max_i] = tmp;
	cout << "\n\n\n";
	for (int i = 0; i < W; i++)
	{
		cout << x[i] << "\t";
		if ((i + 1) % 5 == 0)
			cout << "\n";
	}

	return 0;
}
