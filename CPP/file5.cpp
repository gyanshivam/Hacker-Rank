#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        string str, f_str="", s_str="";
        
        cin>>str;
        
        for(int i=0; i<str.length(); i++)
        {
            if(i%2==0)
                f_str=f_str+str[i];
            else
                s_str=s_str+str[i];
        }
        
        cout<<f_str<<" "<<s_str<<endl;
    }
    return 0;
}
