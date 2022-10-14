#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int count, score;
	long double data = 0l;
	long double result=0l;
	vector<int> v;
	cin >> count;



	for (int i = 0; i < count; i++)
	{
		cin >> score;
		v.push_back(score);
	}

	//max_socre의 자료형에 따라 오차범위 다름 
	double max_socre = *max_element(v.begin(), v.end());

	//cout << "max: " << max_socre << endl;

	for (vector<int>::size_type i = 0; i < count; i++)
	{
		data = (v[i] /max_socre) *100;
		result += data;
	}

 	result /= count;

	cout << result<< endl;

	return 0;
}
