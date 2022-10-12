#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;

int n;
int a[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    
    sort(a, a + n);
    
    cout << a[n - 1] << endl;
    if (n == 1) cout << -1;
    else for (int i = 0; i < n - 1; i ++ ) cout << a[i] << " ";
    
    return 0;
}