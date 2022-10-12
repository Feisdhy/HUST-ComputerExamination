#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 32;

int n;
int d[N], t[N];
unsigned long a, b;

void save()
{
    for (int i = 0; i < 32; i ++ )
        d[i] = a >> (31 - i) & 1;
}

void get_num()
{
    b = 0;
    for (int i = 0; i < 32; i ++ )
        b = b * 2 + d[i];
}

void show()
{
    for (int i = 0; i < 32; i ++ )
        if (!i || i % 8) cout << d[i];
        else cout << " " << d[i];
    cout << endl;
}

int main()
{
    cin >> a >> n;
    
    save();
    for (int i = 0; i < 8; i ++ ) swap(d[i], d[24 + i]);
    get_num();
    cout << b << endl;
    
    save();
    for (int i = 0; i < 16; i ++ ) t[8 + i] = d[8 + i];
    for (int i = 0; i < 24 - n; i ++ ) d[8 + i] = t[8 + n + i];
    for (int i = 0; i < n; i ++ ) d[24 - n + i] = t[8 + i];
    get_num();
    cout << b << endl;
    
    save();
    show();
    
    return 0;
}