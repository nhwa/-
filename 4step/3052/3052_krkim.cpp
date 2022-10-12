#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	
	int array[10];
	vector<int> v;
	
	for(int i=0; i<10; i++)
	{
		cin>> array[i];
	}
	
	for(int i=0; i<10; i++)
	{
		v.push_back(array[i] % 42); 
	}
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()),v.end());
	
	cout << v.size() << endl;
	
	
	return 0;
}
