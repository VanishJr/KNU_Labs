#include <string>
#include <iostream>
#include <vector>


using namespace std;

int main()
{
	vector<string> x;
	string input;
	getline(cin, input);
	int i = 0;
	string temp = "";
	while (true)
	{

		if (input[i] == ' ')
		{
			if (temp != "")
				x.push_back(temp);
			temp = "";
			i++;
			continue;
		}
		if (input[i] == '\0')
		{
			x.push_back(temp);
			break;
		}
		if (input[i] == 'k')
		{
			temp = "";
			while ((input[i] != ' ') && (input[i] != '\0'))
				i++;
			continue;
		}
		temp += input[i];
		i++;
	}
	for (int i = 0; i < x.size(); i++)
		cout << x[i] << "\n";
	return 0;
}
