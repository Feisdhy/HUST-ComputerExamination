#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool judge(int x)
{
    if (x >= 0 && x <= 255) return true;
    else return false;
}

string getnum(int x)
{
    string res;
    
    for (int i = 7; i >= 0; i -- )
        res = res + (char) ((x >> i & 1) + '0');
    
    return res;
}

string trans(int a, int b, int c, int d)
{
    return getnum(a) + getnum(b) + getnum(c) + getnum(d);
}

int main()
{
    int a, b, c, d;
    
    while (~scanf("%d.%d.%d.%d", &a, &b, &c, &d))
    {
        if (judge(a) && judge(b) && judge(c) && judge(d))
            printf("%s\n", trans(a, b, c, d).c_str());
        else puts("illegal");
    }
    
    return 0;
}