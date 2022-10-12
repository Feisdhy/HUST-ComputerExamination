#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << "原文：" << s << endl;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        if (islower(s[i])) s[i] = 'a' + (s[i] - 'a' + 2) % 26;
        else s[i] = 'A' + (s[i] - 'A' + 2) % 26;
    }
    cout << "密文：" << s << endl;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        char c = s[i];
        cout << c << " ";
        
        int cnt = 1;
        for (int i = 0; i < 7; i ++ ) cnt ^= c >> i & 1;
        
        c = (c & 0b01111111) + (cnt << 7);
        for (int i = 7; i >= 0; i -- ) cout << ((c >> i) & 1);
        
        cout << " " << ((unsigned int) c & 0x0000ff) << endl;
    }
    
    return 0;
}