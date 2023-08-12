#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> arr[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;
    // cout << "visited Node: " << u << endl;
    // u = 1
    // section 1: action just after entering a node
    for (int v : arr[u])
    {
        // section 2: action before entering a new child
        if (visited[v])
            continue;

        //  v = 2
        depth[v] = depth[u] + 1; // 1
        dfs(v);
        height[u] = max(height[u], height[v] + 1);
        // section 3: action after exiting a child
    }
    // section 4: action before exiting new node u
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Depth of Node " << i << ": " << depth[i] << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node: " << i << " => ";
    //     for (auto j : arr[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}