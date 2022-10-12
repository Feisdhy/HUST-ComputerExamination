#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    string s, res;
    cin >> s;
    cout << s << endl;
    
    unordered_map<char, int> hash;
    for (int i = 0; i < s.size(); i ++ )
    {
        if (hash[s[i]] ++ != 0) continue;
        res += s[i];
    }
    cout << res << endl;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        if (isdigit(s[i]) || (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f'))
        {
            int c = s[i];
        
            vector<int> d;
            for (int j = 7; j >= 0; j -- ) d.push_back(c >> j & 1);
            swap(d[4], d[7]), swap(d[5], d[6]);
            
            c = 0;
            for (int j = 0; j < d.size(); j ++ ) c = c * 2 + d[j];
            s[i] = toupper(c);
        }
    }
    cout << s << endl;
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int d[8], h[128];

int main()
{
    string s, res;
    cin >> s;
    cout << s << endl;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        if (h[s[i]] ++ != 0) continue;
        res += s[i];
    }
    cout << res << endl;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        if (isdigit(s[i]) || (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f'))
        {
            int c = s[i];
        
            for (int j = 7; j >= 0; j -- ) d[7 - j] = c >> j & 1;
            swap(d[4], d[7]), swap(d[5], d[6]);
            
            c = 0;
            for (int j = 0; j < 8; j ++ ) c = c * 2 + d[j];
            s[i] = toupper(c);
        }
    }
    cout << s << endl;
    
    return 0;
}
*/