#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1010;

string str[N];

bool cmp(const string& s1, const string& s2)
{
    if (s1.size() != s2.size()) return s1.size() < s2.size();
    else return s1 < s2;
}

int main()
{
    int n = 0;
    cin >> n;
    
    for (int i = 0; i < n; i ++ ) cin >> str[i];
    
    sort(str, str + n, cmp);
    
    for (int i = 0; i < n; i ++ ) cout << str[i] << endl;
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;

int n;
string s[N];

void sort()
{
    for (int i = 0; i < n - 1; i ++ )
        for (int j = 0; j < n - i - 1; j ++ )
            if (s[j].size() > s[j + 1].size() || (s[j].size() == s[j + 1].size() && s[j] > s[j + 1]))
                swap(s[j], s[j + 1]);
}

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i ++ ) cin >> s[i];
    
    sort();
    
    for (int i = 0; i < n; i ++ ) cout << s[i] << endl;
    
    return 0;
}
*/