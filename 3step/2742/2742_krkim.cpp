#include<iostream>
using namespace std;

int main()
{
	int count;
	
	
	cin >> count;
	
	for (int i = 1; i <= count; i++  )
	{
		for(int j =count; j <=count; j--)
		{
			cout << i <<  ":"<< j <<"*";
			//cout << "\n";
		}
			cout << "\n";
	}	
	

	
	

	return 0;
}
