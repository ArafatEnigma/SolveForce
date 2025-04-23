#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t, n, s = 0;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int e = 2*n;
        int arr[n][n];
        int arr2[e];
        arr2[0] = 0;
        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
               cin >> arr[i][j];
               arr2[i + j + 1] = arr[i][j];                
            }
        }
        for(int i = 1; i < e; i++)
        {
            xor1 ^= arr2[i];
        }
        for (int i = 1; i <= e; ++i)
        {
            xor2 ^= i;
        }
        arr2[0] = xor2 ^ xor1;
        for (int i = 0; i < e; ++i)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
}   