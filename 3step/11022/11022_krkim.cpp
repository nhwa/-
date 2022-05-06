#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int count;
		
	cin >> count;

		for(int j = 1; j <= count; j++)
		{
			for(int i = 1; i<=count; i++ )
			{
				while(i !=j){
				cout << "*" ;	
				}
			 	cout << endl;
			 			
			}
			//cout << j << endl;
		}

	
	return 0;
}
