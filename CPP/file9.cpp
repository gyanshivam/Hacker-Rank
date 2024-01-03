#include <bits/stdc++.h>

using namespace std;

int main()
{
    int inp;

    cin>>inp;

    if(inp%2 != 0)
        cout<<"Weird";
    else if((inp%2 == 0) && (inp >= 2) && (inp < 5))
        cout<<"Not Weird";
    else if((inp%2 == 0) && (inp >= 6) && (inp <= 20))
        cout<<"Weird";
    else if((inp%2 == 0) && (inp > 20))
        cout<<"Not Weird";
        
    return 0;
}
