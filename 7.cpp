#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int t = s.size();
    int up = 0, low = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            up++;
        }

        if (islower(s[i]))
        {
            low++;
        }
    }

    if (up > low)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout<<s;
    return 0;
}