#include <string>
#include <iostream>
#define n 3

using namespace std;

struct SCHL
{
	string name = "";
	int* subj = new int[3];//math inf fiz
};

void in(SCHL* x);
void out(SCHL* x);

int main()
{
	SCHL* x = new SCHL[n];
	in(x);
	out(x);
	return 0;
}

void in(SCHL* x)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Surname:";
		cin >> x[i].name;
		cout << "subj:(math, inf, fiz)\n";
		cin >> x[i].subj[0] >> x[i].subj[1] >> x[i].subj[2];
	}
}
void out(SCHL* x)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		int checker_4 = 0;
		int checker_5 = 0;
		for (int j = 0; j < 5; j++)
		{
			if (x[i].subj[j] == 4)
				checker_4++;
			if (x[i].subj[j] == 5)
				checker_5++;
		}
		if ((checker_4 == 1) && (checker_5 == 2))
		{
			counter++;
			cout << x[i].name << "\t" << endl;
		}
	}
	cout << "amount:" << counter;
}