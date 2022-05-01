#include<iostream>

using namespace std;

int Dice(int a, int b, int c){
	
	int array[3] = {a, b, c};
	for(int i = 0; i < 2; i++)
	{
	 	if(array[i] > array[i + 1]){
	 		int temp = array[i];
	 		array[i] = array[i+1];
	 		array[i+1] = temp;
		 }
	}
	return array[2];
}

int main()
{
    int A;
    int B;
    int C;

    cin >> A;
    cin >> B;
    cin >> C;
		   
		   
	if( A == B && A == C)
	{
		cout << 10000 + (A* 1000) << endl;
	}   
	else if( ( A == B & B != C) || ( A == C && A != B  ) || ( B == C && A !=C )){
		 if(( A == B & B != C)){
		 	cout << 1000 + (A *100) << endl;
		 }
		 else if  ( A == C && A != B  ){
		 		cout << 1000 + (A *100) << endl;
		 }else if ( B == C && A !=C )
		 {
		 		cout << 1000 + (B *100) << endl;
		 }
	}
	else if( (A !=B )& (A != C) &( B != C)){
		cout << Dice(A,B,C) * 100 << endl;
	}

	int num = Dice(A,B,C);
	cout <<"가장큰수" << num << endl;	
    return 0;
}
