#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long n;
	int i;
	cin >> n;
	while (n > 0)
   {
		i = n%10;
		n = n/10;
		cout << i;
	}
	cout << endl;
	return 0;
}