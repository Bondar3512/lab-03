#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, max=0;
	for (i=0; i<10; i++)
	{
		cin >> n;
		if (abs(n) > abs(max))
			max = n;
	}
	cout << max << endl;
}
