#include <bits/stdc++.h>
#include <cstring>

using namespace std;
int main()
{
    string str;
    cin >> str;
    const char* strtemp = str.c_str();
    char* str1 = new char[str.length()+1];
    strcpy(str1,strtemp);

    cin >> str;
    strtemp = str.c_str();
    char* str2 = new char[str.length()+1];
    strcpy(str2,strtemp);

    int countt = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int range = len2 - len1;

    for (int i = 0; i <= range; i++)
    {
        char* str3 = new char[len1];
        for (int j=0 ; j<len1; ++j)
            str3[j]=str2[j+i];
        str3[len1]='\0';
        if (strcmp(str3,str1)==0) countt++;
    }
    cout << countt;
    return 0;
}
