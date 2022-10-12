#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

int n;
int g[N][N];

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i ++ )
        for (int j = 0; j < n; j ++ )
            cin >> g[i][j];
            
    for (int j = 0; j < n; j ++ )
    {
        for (int i = 0; i < n; i ++ )
            cout << g[i][j] << " ";
        puts("");
    }
    
    return 0;
}