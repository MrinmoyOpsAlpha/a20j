#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a;
    cin >> s;
    int t = s.size();
    int i = s.size();

    while (t)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                a.push_back('0');
                t--;
            }

            else if (s[i] == '-' && s[i + 1] == '.')
            {
                a.push_back('1');
                t = t - 2;
                i = i + 1;
            }

            else 
            {
                a.push_back('2');
                t = t - 2;
                i = i + 1;
            }
        }
    }

    cout<<a;
    return 0;
}