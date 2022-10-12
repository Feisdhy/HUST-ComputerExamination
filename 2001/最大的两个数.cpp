#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int g[5][4], col[4], ans[2][5];

int get_idx(int x)
{
    for (int i = 0; i < 4; i ++ )
        if (x == col[i]) return i;
    
    return -1;
}

int main()
{
    for (int i = 0; i < 4; i ++ )
        for (int j = 0; j < 5; j ++ )
            cin >> g[j][i];
            
    for (int i = 0; i < 5; i ++ )
    {
        for (int j = 0; j < 4; j ++ ) col[j] = g[i][j];
        
        sort(g[i], g[i] + 4, std::greater<int>());
        
        if (g[i][0] == g[i][1]) ans[0][i] = ans[1][i] = g[i][0];
        else
        {
            int idx1 = get_idx(g[i][0]), idx2 = get_idx(g[i][1]);
            ans[0][i] = g[i][0], ans[1][i] = g[i][1];
            if (idx1 > idx2) swap(ans[0][i], ans[1][i]);
        }
    }
    
    for (int i = 0; i < 2; i ++ )
    {
        for (int j = 0; j < 5; j ++ )
            cout << ans[i][j] << " ";
        puts("");
    }
    
    return 0;
}