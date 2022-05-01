#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    int H;
    int M;

//	while ( M <= 60 & H <=24)    
//    {
    cin >> H ;
   	cin >> M;
   	


	if(M - 45 < 0)
	{
			cout << H << M  <<endl;
	}else 
	{
		cout << H-1 << M - 45 <<endl;
	}
	
    return 0;
}
