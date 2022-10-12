#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int ans = 0;
    for (int i = 0; i < s.size(); i ++ )
        if (isalpha(s[i])) cout << s[i] - 'a' + 10 << ' ', ans = ans * 12 + s[i] - 'a' + 10;
        else cout << s[i] - '0' << ' ', ans = ans * 12 + s[i] - '0';
    
    cout << endl << ans << endl;
    
    for (int i = 31, cnt = 0; i >= 0; i -- )
    {
        cout << (ans >> i & 1);
        if (++ cnt % 8 == 0) cout << ' ';
    }
    
    return 0;
}