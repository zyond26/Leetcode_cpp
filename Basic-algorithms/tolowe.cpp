// s[i] = tolower(s[i]);

//  or s[i] = s[i] + 32;

//  EX :
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "nhap chuoi: ";
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    cout << " chuoi sau khi chuyen ve chu thuong: " << s;
    return 0;
}