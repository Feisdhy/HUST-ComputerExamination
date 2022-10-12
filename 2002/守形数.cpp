#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    while (cin >> x)
    {
        int y = x * x;
        bool flag = true;
        
        while (x)
        {
            int a = x % 10, b = y % 10;
            if (a == b) x /= 10, y /= 10;
            else
            {
                flag = false;
                break;
            }
        }
        
        flag ? puts("Yes!") : puts("No!");
    }
    
    return 0;
}