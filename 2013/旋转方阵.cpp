#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e4 + 10;

int res[N][N];

void dfs(int x, int y, int n, int s)
{
    if (n <= 0) return;
    else
    {
        for (int i = y; i < y + n; i ++ ) res[x][i] = s ++ ;
        for (int i = x + 1; i < x + n; i ++ ) res[i][y + n - 1] = s ++ ;
        for (int i = y + n - 2; i >= y; i -- ) res[x + n - 1][i] = s ++ ;
        for (int i = x + n - 2; i >= x + 1; i -- ) res[i][y] = s ++ ;
        dfs(x + 1, y + 1, n - 2, s);
    }
}

int main()
{
    int n;
    cin >> n;
    
    dfs(1, 1, n, 1);

    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
            printf("%3d ", res[i][j]);
        puts("");
    }
    
    return 0;
}