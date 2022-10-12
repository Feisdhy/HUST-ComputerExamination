#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    
    while (cin >> s)
    {
        // string t = s;
        // reverse(s.begin(), s.end());
        // if (t == s) puts("Yes!");
        // else puts("No!");
        
        bool flag = true;
        
        for (int i = 0, j = s.size() - 1; i < j; i ++ , j -- )
            if (s[i] != s[j]) flag = false;
            
        flag ? puts("Yes!") : puts("No!");
    }
    
    return 0;
}