#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, k, sum = 0;
	long long n;
	cin >> n;
	while (n > 0)
   {
		sum += n%10;
		n = n/10;
		i = n%10*2;
		if (i > 9)
      {
			sum += i%10;
			i = i/10;
			sum += i;
		}
		else sum += i;
		n = n/10; 
	}
	if (sum%10 == 0)
		cout << "VALID" << endl;
	else
		cout << "INVALID" << endl;
	return 0;
}