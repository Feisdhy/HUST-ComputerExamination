#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

int n;
int g[N][N];

int main()
{
    while (cin >> n)
    {
        for (int i = 0; i < n; i ++ )
            for (int j = 0; j < n; j ++ )
                cin >> g[i][j];
        
        bool flag = true;
        for (int i = 0; i < n && flag; i ++ )
            for (int j = 0; j < i && flag; j ++ )
                if (g[i][j] != g[j][i]) flag = false;
                
        flag ? puts("Yes!") : puts("No!");
    }
    
    return 0;
}