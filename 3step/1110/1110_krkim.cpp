//#include<iostream>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	
//		int count;
//		int one;
//		int ten;
//		int sum;
//		int N;	
//		cin >> sum;
//		N = sum;
//		while(1){
//		
//		if( sum < 10){
//			one = sum % 10;
//			sum = 0 + one;
//			//sum = one + one;
//			sum = one * 10 + (sum % 10);
//			count ++;
//			
//			
//		}
//		one = sum % 10; // 6
//		ten = sum / 10; //2
//		
//		sum = one + ten; // 8
//		sum = one * 10 + (sum % 10); // 60 + 8
//	
//		count ++;
//	//	cout << "roop :" << count << " " << sum << endl;
//			if(N == sum ){
//				break;
//				}
//			}
//	cout << count;
//
//	return 0;
//
//}
#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	int num, temp;
	cin >> n;
	num = n;

	while (1) {
		temp = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		cnt++;
		n = temp;
		if (temp == num)
			break;
	}
	cout << cnt << '\n';
}
