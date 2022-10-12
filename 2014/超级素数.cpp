#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool st[10000];

bool judge(int x)
{
    if (x < 2) return false;
    
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0) return false;
    
    return true;
}

int main()
{
    
    for (int i = 1000; i < 10000; i ++ )
    {
        int a, b, c, d;
        a = i / 1000;
        b = a * 10 + (i % 1000) / 100;
        c = b * 10 + (i % 100) / 10;
        d = c * 10 + i % 10;
        
        if (judge(a) && judge(b) && judge(c) && judge(d)) st[i] = true;
        else st[i] = false;
    }
    
    for (int i = 1000, cnt = 0; i < 10000; i ++ )
    {
        if (st[i] && (!cnt || cnt % 6 )) cout << i << " ", cnt ++ ;
        else if (st[i] && cnt % 6 == 0) cout << endl << i << " ", cnt ++ ;
    }
    
    return 0;
}