#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string a, string b)
{
    if (isalpha(a[0])) return a < b;
    else
    {
        if (a.size() != b.size()) return a.size() < b.size();
        
        for (int i = 0; i < a.size(); i ++ )
            if (a[i] != b[i]) return a[i] < b[i];
        return true;
    }
}

int main()
{
    string s;
    vector<string> res;
    
    while (cin >> s) res.push_back(s);
    
    for (int i = res.size() - 1; i >= 0; i -- ) cout << res[i] << endl;
    
    puts("");
    
    sort(res.begin(), res.end(), cmp);
    
    for (int i = 0; i < res.size(); i ++ ) cout << res[i] << endl;
    
    return 0;
}