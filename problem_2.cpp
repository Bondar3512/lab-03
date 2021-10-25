#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, j, n;
    cin >> n;
	for (i=1; i<=n; i++)
   {
		for (j=1; j<=2*n-1; j++)
			if (j<=n-i)
			cout << ' ';
			else
			if (j<n+i)
			cout << '#';
			cout << '\n';
	}
	return 0;
}	