#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int count;
	
	int A;
	int B;
	
		
	cin >> count;
	
	for (int i = 0; i < count ; i++ )
	{
			cin >> A;
			cin >> B;	
		    cout << "Case #" << i+1 << ": " << A << " + " << B << " = "<< A + B << "\n";
	}


	
	return 0;
}
