#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

int p[N];

int main()
{
    int n, d;
    
    while (~scanf("%d/%d", &n, &d))
    {
        string res;
        if (n / d != 0) res += to_string(n / d);
        n %= d;
        
        if (!n) res = res + ".0";
        else
        {
            string num;
            memset(p, -1, sizeof p);
            
            while (n && p[n] == -1)
            {
                p[n] = num.size();
                n *= 10;
                num += n / d + '0';
                n %= d;
            }
            
            if (!n) res = res + '.' + num;
            else res = res+ '.' + num.substr(0, p[n]) + '(' + num.substr(p[n]) + ')';
        }
        
        for (int i = 0; i < res.size(); i ++ )
            if ((i + 1) % 76 == 0) cout << res[i] << endl;
            else cout << res[i];
        cout << endl;
    }
    
    return 0;
}