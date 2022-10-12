#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> add(vector<int>& a, vector<int>& b)
{
    vector<int> ans;
    for (int i = 0, c = 0; i < a.size() || i < b.size() || c; i ++ )
    {
        if (i < a.size()) c += a[i];
        if (i < b.size()) c += b[i];
        ans.push_back(c % 10);
        c /= 10;
    }
    return ans;
}

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        vector<int> c, d, ans;
        for (int i = a.size() - 1; i >= 0; i -- ) c.push_back(a[i] - '0');
        for (int i = b.size() - 1; i >= 0; i -- ) d.push_back(b[i] - '0');
        ans = add(c, d);
        for (int i = ans.size() - 1; i >= 0; i -- ) printf("%d", ans[i]);
        puts("");
    }
    return 0;
}

/*#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e3 + 10;
int a[N], b[N], ans[N], m, n, l;

void add(int a[], int b[])
{
    for (int i = 0, c = 0; i < m || i < n || c; i ++ )
    {
        if (i < m) c += a[i];
        if (i < n) c += b[i];
        ans[l ++ ] = c % 10;
        c /= 10;
    }
}

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        for (int i = str1.size() - 1; i >= 0; i -- ) a[m ++ ] = str1[i] - '0';
        for (int i = str2.size() - 1; i >= 0; i -- ) b[n ++ ] = str2[i] - '0';
        add(a, b);
        for (int i = l - 1; i >= 0; i -- ) printf("%d", ans[i]);
        puts("");
        m = n = l = 0;
    }
    return 0;
}*/