#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s; //用于记录输入的字符串
    cin >> s;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        int num = s[i]; //char会直接把ascaii码赋值给num（此前比较模糊）
        
        int ascaii[8], cnt = 1; //用于保存奇偶校验的结果，同时cnt用于判断最高位的值
        
        for (int k = 0; k < 7; k ++ )
        {
            int t = num >> k & 1; // 取出ascaii码的第k位
            ascaii[7 - k] = t;
            cnt ^= t;
        }
        
        ascaii[0] = cnt;
        
        for (int k = 0; k < 8; k ++ ) cout << ascaii[k];
        puts("");
    }
    
    return 0;
}