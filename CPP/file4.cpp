#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sc_all[3];
    int sc_bob[3];
    int f_sc=0, l_sc=0;
    
    for(int i=0; i<3; i++)
        cin>>sc_all[i];
    
    for(int i=0; i<3; i++)
    {
        cin>>sc_bob[i];
        
        if(sc_all[i] > sc_bob[i])
            f_sc++;
        else if(sc_all[i] < sc_bob[i])
            l_sc++;
    }
    
    cout<<f_sc<<" "<<l_sc;
    
    return 0;
}
