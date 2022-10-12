#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 10010;

bool st[N];

bool judge(int x)
{
    if (x < 2) return false;
    
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0) return false;
    
    return true;
}

int main()
{
    for (int i = 1; i < 10000; i ++ ) st[i] = judge(i);
    
    int m;
    cin >> m;
    
    for (int i = m; i >= 3; i -- )
        if (st[i] && st[i - 2])
        {
            cout << i - 2 << " " << i << endl;
            break;
        }
    
    
    return 0;
}