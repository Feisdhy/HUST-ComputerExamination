#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int ans;

void dfs(int u)
{
    if (u == 0) ans ++ ;
    else if (u > 0)
    {
        dfs(u - 1);
        dfs(u - 2);
    }
}

int main()
{
    int n;
    
    while (cin >> n)
    {
        dfs(n);
        cout << ans << endl;
    }
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 100;

int plan[N];

int main()
{
    plan[1] = 1, plan[2] = 2;
    
    for (int i = 3; i <= 90; i ++ )
        plan[i] = plan[i - 1] + plan[i - 2];
        
    int n;
    while (cin >> n) cout << plan[n] << endl;
    
    return 0;
}
*/