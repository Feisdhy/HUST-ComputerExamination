#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

bool judge(string s)
{
    if (s.size() != 11) return false;
    else if (s[0] != '1') return false;
    else if (s[1] == '3' || s[1] == '5' || s[1] == '6' || s[1] == '8')
    {
        for (int i = 2; i < 11; i ++ )
            if (!isdigit(s[i])) return false;
        return true;
    }
    else return false;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (judge(s)) puts("Yes");
        else puts("No");   
    }
    
    return 0;
}