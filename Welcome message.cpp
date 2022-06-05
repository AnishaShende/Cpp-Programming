#include <bits/stdc++.h>
using namespace std;

class WelcomeMessage
{
public:
	WelcomeMessage(int n, int m)
	{
		int i, j;
		string message;
		// Change this message
		message = "Welcome to the Luggage section !";
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= m; j++)
			{
				if (i == 4)
				{
					// cout<<"*   Welcome to the Luggage section !   *"<<endl<<"*                                      *";
					cout << "*   " << message << "   *" << endl
						 << "*                                      *";
					break;
				}
				if (i == 1 || i == n ||
					j == 1 || j == m)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	}
};
int main()
{
	// int rows = 6, columns = 40;
	WelcomeMessage WelObj(6, 40);
	return 0;
}
