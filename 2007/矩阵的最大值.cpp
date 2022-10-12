#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

int m, n;
int g[N][N];

int main()
{
    while (~scanf("%d%d", &m, &n))
    {
        for (int i = 0; i < m; i ++ )
        {
            int k = 0, sum = 0;
            for (int j = 0; j < n; j ++ )
            {
                scanf("%d", &g[i][j]);
                if (g[i][j] > g[i][k]) k = j;
                sum += g[i][j];
            }
            g[i][k] = sum;
        }
    
        for (int i = 0; i < m; i ++ )
        {
            for (int j = 0; j < n; j ++ )
                printf("%d ", g[i][j]);
            puts("");
        }
    }
    
    return 0;
}