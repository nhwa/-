#include <iostream>
using namespace std;

int main()
{
	int X=0;//�ѱݾ� 
	int a=0;//������ ���� 
	int b=0;//������ ���� 
	int N=0;//������ ������ ���� 
	
	int cal_sum=0;//������ 
	
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
