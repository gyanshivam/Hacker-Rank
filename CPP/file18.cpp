#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int ans;
    
    if(a>b && c>d)
    {
        if(a>c)
            ans = a;
        else
            ans = c;
    }
    else if(a<b && c<d)
    {
        if(b>d)
            ans = b;
        else
            ans = d;
    }
    else if(a>b && c<d)
    {
        if(a>d)
            ans = a;
        else
            ans = d;
    }
    else    
    {
        if(b>c)
            ans = b;
        else
            ans = c;
    }
    
    return ans;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
