#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

string s;
int cnt[62];
bool st[62];

int get_idx(char c)
{
    if (islower(c)) return c - 'a';
    else if (isupper(c)) return c - 'A' + 26;
    else return c - '0' + 52;
}

void show(char c)
{
    for (int i = 0, cnt = 0; i < s.size(); i ++ )
        if (c == s[i])
        {
            if (cnt ++) cout << ',';
            cout << c << ':' << i;
        }
    
    puts("");
}

int main()
{
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i ++ ) cnt[get_idx(s[i])] ++ ;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        int idx = get_idx(s[i]);
        if (cnt[idx] > 1 && !st[idx]) 
            show(s[i]), st[idx] = true;
    }
    
    return 0;
}