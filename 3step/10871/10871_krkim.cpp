#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	
		int count;
		int one;
		int ten;
		int sum;
		int N;	
		cin >> sum;
		N = sum;
		while(1){
		
		if( sum < 10){
			one = sum % 10;
			sum = 0 + one;
			//sum = one + one;
			sum = one * 10 + (sum % 10);
			count ++;
			
			
		}
		one = sum % 10; // 6
		ten = sum / 10; //2
		
		sum = one + ten; // 8
		sum = one * 10 + (sum % 10); // 60 + 8
	
		count ++;
		cout << "roop :" << count << " " << sum << endl;
			if(N == sum ){
				break;
				}
			}
	cout << count;

	return 0;

}
