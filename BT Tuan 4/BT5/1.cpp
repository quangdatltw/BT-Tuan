#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void mine(int m, int n, int K)
{
    char A[m][n];
    bool B[m][n];
    for (int i=0; i<m ; i++)
    for (int j=0; j<n ; j++)
    {
            A[i][j]='#';
            B[i][j]=false;
    }
    for (int i=1 ; i<=K ; i++)
    B[rand()%m][rand()%n] = true;
    bool running=true;
    int x,y;
    while (running)
    {
        cin >> x >> y;
        x--;
        y--;
        if (B[x][y])
        {
            A[x][y]='B';
            for (int i=0; i<m ; i++)
            {
                for (int j=0; j<n ; j++)
                {
                    if (B[i][j]) A[i][j] = 'B';
                    cout << A[i][j] << " ";
                }
                cout << endl;
            }
            cout << "YOU'RE DEAD!";
            break;
        }
        else
        {
            int countt = 0;
            for (int i=x-1; i<=x+1 ; i++)
            for (int j=y-1; j<=y+1 ; j++)
            {
                if (i>=0&&i<m&&j>=0&&j<n&&!(i==x&&j==y))
                    if (B[i][j]) countt++;
            }
            A[x][y] = countt + '0';
            int check = 0;
            for (int i=0; i<m ; i++)
            {
                for (int j=0; j<n ; j++)
                {
                    cout << A[i][j] << " ";
                    if (A[i][j]=='#') check++;
                }
                cout << endl;
            }
            if (check==K)
            {
                cout << "YOU WON!";
                break;
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int m,n,K;
    cin >> m >> n >> K;
    mine(m,n,K);
}
