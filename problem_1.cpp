#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, x;
	float n, sum;
	sum = 0;
	for (i=0; i<10; i++)
	{
		cin >> x;
		sum += x;
	}
	n = sum/10;
	cout << n << endl;
	return 0;
}
	