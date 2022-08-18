#include <iostream>
using namespace std;

int main()
{
	int X=0;//총금액 
	int a=0;//물건의 가격 
	int b=0;//물건의 개수 
	int N=0;//구매한 물건의 개수 
	
	int cal_sum=0;//영수증 
	
	cin>>X;
	cin>>N;
	
	
	for(int i=1; i<=N; i++)
	{
		cin>>a>>b;
		cal_sum+= a*b;
	}
	
	if(X == cal_sum)
	{
	cout<<"Yes"<<endl;
	}
	else
		cout<<"No"<<endl;
	
	
	return 0;
}
