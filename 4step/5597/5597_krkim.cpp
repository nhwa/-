#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int number=0;
	
	for(int i=1;  i<=30; i++)
	{
		v.push_back(i);
	}

	for(int i=0; i<28; i++)
	{
		cin>> number;
		v.erase(remove(v.begin(), v.end(), number), v.end());
	}
	

  for (auto i = v.begin(); i != v.end(); ++i)
    cout << *i << endl;

	
}


