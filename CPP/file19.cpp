#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    string num[] ={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    
    cin>>a>>b;
    
    for(int i=a-1; a<=b; a++,i++)
    {
        if(a<=9)
        {
            cout<<num[i]<<endl;
        }
        else
        {
           if(a%2==0) 
                cout<<"even\n";
            else
                cout<<"odd\n";
        }
    }
    return 0;
}

