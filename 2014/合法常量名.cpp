#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string s;

bool isdigit_16(char c)
{
    if (isdigit(c) || (tolower(c) >= 'a' && tolower(c) <= 'f')) 
        return true;
    else return false;
}

bool isdigit_8(char c)
{
    if (c >= '0' && c <= '7') return true;
    else return false;
}

bool judge(string s)
{
    if (s[0] == '0') 
    {
        if (s.size() == 1) return true;
        else if (tolower(s[1]) == 'x')
        {
            if (s.size() == 2) return false;
            else if (s.size() == 3 && isdigit_16(s[2])) return true;
            else if (s.size() == 3) return false;
            else if (s.size() == 4 && !isdigit_16(s[2])) return false;
            else if (s.size() == 4 && (isdigit_16(s[3]) || tolower(s[3]) == 'u' || tolower(s[3]) == 'l')) return true;
            else if (s.size() == 4) return false;
            else
            {
                for (int i = 2; i < (int) s.size() - 2; i ++ )
                    if (!isdigit_16(s[i])) return false;
            
                int i = s.size() - 2;
                if (isdigit_16(s[i]) && isdigit_16(s[i + 1])) return true;
                else if (tolower(s[i]) == 'u' && tolower(s[i + 1]) == 'l') return true;
                else if (isdigit_16(s[i]) && (tolower(s[i + 1]) == 'u' || tolower(s[i + 1]) == 'l')) return true;
                else return false;
            }
        }
        else
        {
            if (s.size() == 1 && isdigit_8(s[0])) return true;
            else if (s.size() == 1) return false;
            else if (s.size() == 2 && !isdigit_8(s[0])) return false;
            else if (s.size() == 2 && (isdigit_8(s[1]) || tolower(s[1]) == 'u' || tolower(s[1]) == 'l')) return true;
            else if (s.size() == 2) return false;
            else
            {
                for (int i = 1; i < (int) s.size() - 2; i ++ )
                    if (!isdigit_8(s[i])) return false;
            
                int i = s.size() - 2;
                if (isdigit_8(s[i]) && isdigit_8(s[i + 1])) return true;
                else if (tolower(s[i]) == 'u' && tolower(s[i + 1]) == 'l') return true;
                else if (isdigit_8(s[i]) && (tolower(s[i + 1]) == 'u' || tolower(s[i + 1]) == 'l')) return true;
                else return false;
            }
        }
    }
    else if (s.size() == 1 && isdigit(s[0])) return true;
    else if (s.size() == 1) return false;
    else if (s.size() == 2 && !isdigit(s[0])) return false;
    else if (s.size() == 2 && (isdigit(s[1]) || tolower(s[1]) == 'u' || tolower(s[1]) == 'l')) return true;
    else if (s.size() == 2) return false;
    else
    {
        for (int i = 0; i < (int) s.size() - 2; i ++ )
            if (!isdigit(s[i])) return false;
        
        int i = s.size() - 2;
        if (isdigit(s[i]) && isdigit(s[i + 1])) return true;
        else if (tolower(s[i]) == 'u' && tolower(s[i + 1]) == 'l') return true;
        else if (isdigit(s[i]) && (tolower(s[i + 1]) == 'u' || tolower(s[i + 1]) == 'l')) return true;
        else return false;
    }
}

int main()
{
    while (cin >> s)
    {
        if (judge(s)) puts("Yes");
        else puts("No");
    }
    
    return 0;
}