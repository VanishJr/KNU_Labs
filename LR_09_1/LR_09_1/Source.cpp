#include <string>
#include <iostream>
#define n 3

using namespace std;

struct SCHL
{
	string name = "";
	int group = 0;
	int* subj = new int[5];
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
		cout << "name: ";
		cin >> x[i].name;
		cout << "group: ";
		cin >> x[i].group;
		cout << "subj: ";
		cin >> x[i].subj[0] >> x[i].subj[1] >> x[i].subj[2] >> x[i].subj[3] >> x[i].subj[4];
	}
}
void out(SCHL* x)
{
	for (int i = 0; i < n; i++)
	{
		bool checker = 0;
		for (int j = 0; j < 5; j++)
			if (x[i].subj[j] <= 2)
				checker = 1;
		if (checker)
		{
			cout << x[i].name << "\t" << x[i].group << endl;
		}
	}
}