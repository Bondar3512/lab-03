#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, j, n;
    cin >> n;
	for (i=n; i>=1; i++)
   {
		for (j=1; j<=2*n; j++)
		if (j == i && i != 1)
			cout << '/';
		else
		if (j==2*n-i+1 && i != 1)
			cout << '\\';
		else
		if (i == 1)
			cout << '=';
		else
			cout << ' ';
		cout << '\n';
	}
	return 0;
}