#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 210;

int n;
char s[N];

int main()
{
    char c;

    while (cin >> c) s[n ++ ] = c;

    for (int i = 0; i < n; i ++ )
        cout << s[i];
    cout << endl;

    return 0;
}
