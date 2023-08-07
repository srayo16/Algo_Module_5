#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int arr[N][N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        // without weight
        //  arr[u][v] = 1; // if only directed
        //  arr[v][u] = 1; // if undirected too

        // without weight
        arr[u][v] = w; // if only directed
        arr[v][u] = w; // if undirected too
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