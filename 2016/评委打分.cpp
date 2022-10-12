#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 10;

double scores[N];

int main()
{
    for (int i = 0; i < 7; i ++ ) scanf("%lf", &scores[i]);
    
    sort(scores, scores + 7);
    
    double res = 0;
    
    for (int i = 1; i < 6; i ++ ) res += scores[i];
    
    printf("%.1lf\n", res / 5);
    
    return 0;
}