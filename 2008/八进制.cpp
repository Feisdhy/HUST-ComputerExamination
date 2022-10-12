#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    
    while (cin >> x)
    {
        if (!x) puts("0");
        else 
        {
            string ans;
            while (x)
            {
                ans += x % 8 + '0';
                x /= 8;
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
            
            // for (int i = ans.size() - 1; i >= 0; i -- ) cout << ans[i];
            // puts("");
        }
    }
    
    return 0;
}