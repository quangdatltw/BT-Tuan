#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	srand(time(NULL));
	bool running = true;
	while (running)
	{
		string a;
		cout << "exit or start:";
		cin >> a;
		if (a=="exit") break;
		else
		if (a=="start")
		{
			int guessnum = rand(), num;
			bool answer = true;
			while(answer)
			{
				cout << "Your number:";
				cin >> num;
				if (num > guessnum) cout << "Yout num is bigger" << endl;
				else if (num < guessnum) cout << "Your num is smaller" << endl;
				else 
				{
					answer = false;
					cout << "Bingo"<<endl;
				}
			}
		}
	}
	
}

