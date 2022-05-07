#include<iostream>
using namespace std;

int main()
{
	//ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int A;
	int B;
	while(cin.eof()){
		cin >> A;
		cin >> B;
		
		cout << A + B << "\n";
	}
		

	return 0;

}

//????????????????
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	int a, b;
//    
//	while(true) {
//		cin >> a >> b;
//		if (cin.eof()) break;
//		cout << a + b << "\n";
//	}
//
//	return 0;
//}
