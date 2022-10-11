#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	
	int count;
	
	cin>>count;
	
	for(int i=0; i<count; i++)
	{
		int number;
		cin >>number;
		v.push_back(number);
	}
	
	sort(v.begin(), v.end());
	
	vector<int>::iterator min_iter = v.begin();
	vector<int>::iterator max_iter = v.end()-1;
	cout << *min_iter << " " << *max_iter << endl;
	
//	vector<int>::iterator iter;
//	for(iter = v.begin(); iter!= v.end(); ++iter)
//	{
//		cout << *iter << endl;
//	}
	
	
	return 0;
}
