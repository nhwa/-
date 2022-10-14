#include<iostream>
#include<vector>
#include<string>
using namespace std;

int score(string num)
{
	int i = 0;
	int check = 0;
	int count = 0;
	char check_str = 'O';
	char check_not = 'X';
	while (num[i] != '\0')
	{
		if (check_str == num[i])
		{
			count++;

		}
		else if(check_not == num[i])
		{
			count = 0;
		}

		check += count;
		i++;
	}

	return check;
}


int main()
{
	vector<string> v;
	string str;
	int count = 0;

	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> str;
		v.push_back(str);
	}

	for (vector<string>::size_type i = 0; i < v.size(); i++)
	{
		cout << score(v[i]) << endl;
	}


	return 0;
}
