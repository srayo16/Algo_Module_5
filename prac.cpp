#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

int arr[N][N];

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        arr[u][v] = w;
        arr[v][u] = w;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}