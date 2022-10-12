#include <iostream>
#include <cstring>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    char c;
    bool flag = true;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    ofstream out1("D:/abc0.txt");
    if (!out1) {puts("error1"); return 0;}
    while (c = getchar(), c != EOF && c != (char) 26) out1.put(c);
    out1.close();

    ifstream in1("D:/abc0.txt");
    ofstream out2("D:/abc1.txt");
    if (!in1) {puts("error2"); return 0;}
    if (!out2) {puts("error3"); return 0;}
    while (in1.get(c))
    {
        if (c == ' ')
        {
            if (!flag) continue;
            flag = false;
        }
        else flag = true;
        out2.put(c);
    }
    in1.close();
    out2.close();

    ifstream in2("D:/abc1.txt");
    while (in2.get(c))
    {
        cnt1 ++ ;
        if (c == ' ' || c == ',' || c == '.') cnt2 ++ ;
        if (c == '.') cnt3 ++ ;
    }
    printf("char number:%d\nword number:%d\nsentence number:%d\n", cnt1, cnt2, cnt3);
    in2.close();

    return 0;
}