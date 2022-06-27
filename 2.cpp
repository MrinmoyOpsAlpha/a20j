#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5][5], ans = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                int r = abs(i - 3);
                int c = abs(j - 3);
                cout << r + c;
            }
        }
    }

    return 0;
}