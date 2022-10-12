#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string a, b, c, d, e;
    cin >> a >> b;
    
    c = a + b;
    cout << c << endl;
    
    for (int i = 0; i < c.size(); i = i + 2) d = d + c[i];
    for (int i = 1; i < c.size(); i = i + 2) e = e + c[i];
    cout << d << " " << e << endl;
    
    sort(d.begin(), d.end());
    sort(e.begin(), e.end());
    cout << d << " " << e << endl;
    
    return 0;
}