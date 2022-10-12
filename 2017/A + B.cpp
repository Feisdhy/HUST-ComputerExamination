#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    
    while (cin >> a >> b)
    {
        a.erase(std::remove(a.begin(), a.end(), ','), a.end());
        b.erase(std::remove(b.begin(), b.end(), ','), b.end());
        
        bool flag1 = false, flag2 = false;
        if (a[0] == '-') flag1 = true, a.erase(a.begin(), a.begin() + 1);
        if (b[0] == '-') flag2 = true, b.erase(b.begin(), b.begin() + 1);
        
        int num1 = 0, num2 = 0;
        for (int i = 0; i < a.size(); i ++ ) num1 = num1 * 10 + a[i] - '0';
        for (int i = 0; i < b.size(); i ++ ) num2 = num2 * 10 + b[i] - '0';
        
        num1 = flag1 ? -num1 : num1;
        num2 = flag2 ? -num2 : num2;
        
        cout << num1 + num2 << endl;
    }
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int get_num(string s)
{
    int num = 0;
    bool flag = false;
    
    for (int i = 0; i < s.size(); i ++ )
    {
        if (s[i] == '-') flag = true;
        else if (s[i] == ',') continue;
        else num = num * 10 + s[i] - '0';
    }
    
    return flag ? -num : num;
}

int main()
{
    string a, b;
    
    while (cin >> a >> b)
    {
        int nums1 = get_num(a), nums2 = get_num(b);
        
        cout << nums1 + nums2 << endl; 
    }
    
    return 0;
}
*/