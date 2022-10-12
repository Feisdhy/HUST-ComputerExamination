#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap_year(int y)
{
    if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) return 1;
    else return 0;
}

int get_month_days(int y, int m)
{
    if (m == 2) return months[m] + is_leap_year(y);
    else return months[m];
}

int main()
{
    int y, m, d;
    
    while (cin >> y >> d)
    {
        m = 1;
        while (d > get_month_days(y, m)) d -= get_month_days(y, m), m ++ ;
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    
    return 0;
}