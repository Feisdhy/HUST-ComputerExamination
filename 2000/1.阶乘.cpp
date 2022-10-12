#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 15;

int n;
int ans[N];

int main()
{
    ans[0] = 1;
    for (int i = 1; i <= 10; i ++ ) ans[i] = ans[i - 1] * i;
    
    cin >> n;
    int res1 = 0, res2 = 0;
    for (int i = 1; i <= n; i += 2) res1 += ans[i];
    for (int i = 2; i <= n; i += 2) res2 += ans[i];
    cout << res1 << " " << res2 << endl; 
    
    return 0;
}