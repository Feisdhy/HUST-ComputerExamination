#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char op;
    string a, b;
    cin >> a >> b >> op;
    
    int c = 0, d = 0, res;
    for (int i = 0; i < a.size(); i ++ ) c = c * 2 + a[i] - '0';
    for (int i = 0; i < b.size(); i ++ ) d = d * 2 + b[i] - '0';
    
    if (op == '+') res = c + d;
    else if (op == '-') res = c - d;
    else if (op == '*') res = c * d;
    else res = c / d;
    
    for (int i = 15; i >= 0; i -- )
        cout << ((res >> i) & 1);
    cout << endl;
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    char op;
    string a, b;
    cin >> a >> b >> op;
    
    int c = 0, d = 0, res;
    for (int i = 0; i < a.size(); i ++ ) c = c * 2 + a[i] - '0';
    for (int i = 0; i < b.size(); i ++ ) d = d * 2 + b[i] - '0';
    
    if (op == '+') res = c + d;
    else if (op == '-') res = c - d;
    else if (op == '*') res = c * d;
    else res = c / d;
    
    vector<int> ans;
    for (int i = 0; i < 16; i ++ ) ans.push_back(res >> i & 1);
    
    while (ans.size() > 1 && ans.back() == 0) ans.pop_back();
    
    reverse(ans.begin(), ans.end());
    
    for (int i = 0; i < ans.size(); i ++ )
        cout << ans[i];
    cout << endl;
    
    return 0;
}
*/