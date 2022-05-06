#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int count;
		
	cin >> count;

	for(int i = 1; i<= count; i++)
	{
		for(int j = 1; j <= i ; j++)
		{
				cout << "*" ;
		}
			cout << endl;
	}
	
	return 0;
}
