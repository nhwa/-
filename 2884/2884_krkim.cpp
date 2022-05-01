#include<iostream>

using namespace std;

int main()
{
    int H;
    int M;

    cin >> H;
    cin >> M;
		   
   if(  M - 45 >= 0 )
   {
   		cout << H  << " " << M - 45;
	

   }
   else 
   {
   		if(H == 0)
   		{
		   		cout << H -1 + 24  << " " <<( M - 45) + 60;
		   }
		   else{
		   		cout << H - 1 << " " << (M - 45) + 60;
		   }
   	
   }
	
    return 0;
}
