#include<iostream>
using namespace std;

int main()
{
	int count;
	
	cin >> count;
	
	for (int i = 0; i < count; i++  )
	{
			//cout << i << endl;  시간초과 
			cout << count - i << "\n";   
	}	
	
	return 0;
}
