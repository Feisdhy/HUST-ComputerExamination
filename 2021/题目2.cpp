#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int x;
    while (cin >> x)
    {
        int num[32], tmp[32];
        
        for (int i = 31; i >= 0; i -- )
            num[31 - i] = tmp[31 - i] = x >> i & 1;
            
        for (int i = 0; i < 4; i ++ )
        {
            num[4 + i] = tmp[12 + i];
            num[12 + i] = tmp[20 + i];
            num[20 + i] = tmp[28 + i];
            num[28 + i] = tmp[4 + i];
        }
        
        x = 0;
        for (int i = 0; i < 32; i ++ )
            x = x * 2 + num[i];
        cout << x << endl;
    }
    
    return 0;
}