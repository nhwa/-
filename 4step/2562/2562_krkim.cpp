#include <iostream>
using namespace std;

int main()
{
	int N,max;
	int arr[9] ={};
	for(int i =0; i <9; i++)
	{
		cin>>arr[i];
	}
	
	max = 0;		
		for(int j=0; j <9; j++)
		{
			
			if(arr[j] >arr[max])
			max =j;
		}
		
	cout << arr[max] << endl;
	cout << max+1 << endl;
	
	
	
	return 0;
}
