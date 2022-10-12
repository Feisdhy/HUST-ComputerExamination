/*#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        bool flag = true;
        for (int i = 0; i < str.size(); i ++ )
        {
            if (isdigit(str[i]))
            {
                int res = 0;
                while (isdigit(str[i])) res = res * 10 + str[i] - '0', i ++ ;
                i -- ;
                if (res < 0 || res > 255) flag = false; 
            }
            else if (str[i] == '-') flag = false;
        }
        flag ? puts("Yes!") : puts("No!");
    }
    return 0;
}*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool isIp(int num)
{
    return num >= 0 && num <= 255;
}

int main()
{
    int a, b, c, d;
    while (~scanf("%d.%d.%d.%d", &a, &b, &c, &d))
    {
        if (isIp(a) && isIp(b) && isIp(c) && isIp(d)) puts("Yes!");
        else puts("No!");
    }
    return 0;
}