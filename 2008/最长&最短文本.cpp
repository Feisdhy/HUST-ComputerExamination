#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 110;

string s[N];

int main()
{
    int n = 0, min = 100, max = 0;
    
    while (cin >> s[n])
    {
        min = min < s[n].size() ? min : s[n].size();
        max = max > s[n].size() ? max : s[n].size();
        n ++ ;
    }
    
    for (int i = 0; i < n; i ++ )
        if (s[i].size() == min) cout << s[i] << endl;
        
    for (int i = 0; i < n; i ++ )
        if (s[i].size() == max) cout << s[i] << endl;
    
    return 0;
}