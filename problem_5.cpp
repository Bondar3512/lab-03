#include <iostream>
#include <cmath>
using namespace std;
long double fact(int i);
int main()
{
	int i;
	double x, slag, sum=0;
	cin >> x;
	for (i=0; ; i++)
   {
		slag = pow(x,i)/fact(i);
		if (slag > 0.0001)
			sum += slag;		
		else		
			break;				
	}
	cout << abs(exp(x)-sum) << endl;
	return 0;
}