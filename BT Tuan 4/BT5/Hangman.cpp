#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool checkandfix(char charr, string word, string& guess, int wlong)
{
	bool check = false;
	string fix = guess;
	for (int i=0 ; i<wlong ; i++)
	if (charr==word[i])
	{
		check = true;
		fix[i]=word[i];
	}
	guess = fix;
	return check;
}
void draw(int live)
{
	cout << "----------" << endl ;

	cout << "|        ";
	if (live<6) cout <<"|" ;
	cout << endl;

	cout << "|        ";
	if (live<5) cout <<"o" ;
	cout << endl;

	cout << "|       ";
	if (live<4&&live>2) cout <<" |" ;
	else
	if (live<3&&live>1) cout <<"/|" ;
	else
	if (live<2) cout << "/|\\"  ;
	cout << endl;

	cout << "|       ";
	if (live<1) cout <<"/" ;
	if (live<0) cout << " \\" ;
	cout << endl;

	cout << "|        " << endl;
	cout << "-----" << endl;
}
int main()
{
	srand(time(NULL));
	bool running = true;
	string a; int along=0;
	string A[100];
	while(cin >> a)
    {
        if (a[a.length()-1]!='.')
        {
            A[along]=a;
            along++;
        }
        else
        break;
    }
	while (running)
	{
		string status;
		cout << "exit or start : ";
		cin >> status;
		if (status=="exit") break;
		else
		if (status=="start")
		{
			int randd = rand()%along;
			string word=A[randd];
			char charguess;
			int wlong = word.length();
			string guessed = "_";
			int live = 6;

			for (int i=1 ; i< wlong ; i++)
			guessed.push_back('_');

			cout << wlong << " character:"<< guessed << endl
				 << "6 lives" << endl
				 << "Begin:" <<endl;


			while(word != guessed)
			{
				cout << "Your guess :";
				cin >> charguess ;
				if ( charguess <= 122 && charguess >= 97) charguess= char(charguess-32);
				if (checkandfix(charguess, word, guessed, wlong))
				cout << guessed << endl;
				else
				{
					live--;
					draw(live);
				}

				cout << live << " lives left" << endl;
				if (live==-1)
				{
					cout << "You dead :v" << endl << endl;
					break;
				}
				if (word==guessed)
				{
					cout << endl <<"Alive"<< endl << "Word : " << word << endl;
				}
				cout << endl;
			}
		}
	}

}
