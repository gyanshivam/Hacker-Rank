#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b,con;
    char i;
    
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    
    con=a+b;
    
    cout<<con<<endl;
    i=a[0];
    a[0]=b[0];
    b[0]=i;
    
    cout<<a<<" "<<b;
    return 0;
}
