#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s, res;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i ++ )
    {
        if (s[i] == ' ')
        {
            res += s[i];
            while (s[i] == ' ') i ++ ;
            i -- ;
        }
        else if (isdigit(s[i]))
        {
            while (isdigit(s[i])) res += s[i ++ ];
            if (isalpha(s[i])) res += '_';
            i -- ;
        }
        else if (isalpha(s[i]))
        {
            while (isalpha(s[i])) res += s[i ++ ];
            if (isdigit(s[i])) res += '_';
            i -- ;
        }
    }
    
    if (res.size() > 1 && res[0] == ' ') res = res.substr(1, s.size() - 1);
    cout << res << endl;
    
    return 0;
}