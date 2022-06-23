#include <string>
#include <iostream>
#include <vector>
#define W 10

using namespace std;

int main()
{
	vector<int> x;
	int sum = 0;
	for (int i = 0; i < W; i++)
		x.push_back(rand() % 10 - 5);
	for (int i = 0; i < W; i++)
	{
		cout << x[i] << "\t";
		if ((x[i] < 0) && (x[i] % 3 == 0))
			sum += x[i];
		if ((i + 1) % 5 == 0)
			cout << "\n";
	}
	cout << "\nSum:" << sum;


	return 0;
}
