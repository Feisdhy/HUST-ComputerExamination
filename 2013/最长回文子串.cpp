#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s, res;
    getline(cin, s);
    
    int minl, max = 0;
    for (int i = 0; i < s.size(); i ++ )
    {
        if (!isalpha(s[i])) continue;
        for (int j = i; j < s.size(); j ++ )
        {
            string t = s.substr(i, j - i + 1), p;
            for (int k = 0; k < t.size(); k ++ )
                if (isalpha(t[k])) p += tolower(t[k]);
                
            if (p == string(p.rbegin(), p.rend()))
            {
                if (max < p.size()) max = p.size(), minl = i, res = t;
                else if (max == p.size() && i < minl) minl = i, res = t;
            }
        }
    }
    
    return 0;
}