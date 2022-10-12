#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int M[32];

bool judge(int x)
{
    if (x < 2) return false;
    
    for (int i = 2; i < x / i; i ++ )
        if (x % i == 0) return false;
    
    return true;
}

int main()
{
    for (int i = 0, cnt = 1; i < 32; i ++ , cnt = cnt + cnt) M[i] = cnt - 1;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < 32 && M[i] <= n; i ++ )
        if (judge(i) && judge(M[i]))
            cout << "M(" << i << ")=" << M[i] << endl;
    
    return 0;
}