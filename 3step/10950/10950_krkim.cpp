#include<iostream>
using namespace std;
int main()
{
	int number;
	int sum = 0;
	
	cin >> number;
	
	for(int i= 1; i <= number; i ++ )
	{
		
		sum =sum + i;
			//cout << sum << endl;
	}
	
	cout << sum << endl;	
	
	return 0;
}
