#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    
    cin>>size;
    
    int arr[size];
    int temp1=0, temp2=0, temp3=0;
    double ratio;
    
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
        
        if(arr[i]>0)
            temp1++;
        else if(arr[i]<0)
            temp2++;
        else
            temp3++; 
    }
    
    ratio=(double)temp1/(double)size;
    cout<<ratio<<setprecision(6)<<endl;
    
    ratio=(double)temp2/(double)size;
    cout<<ratio<<setprecision(6)<<endl;
    
    ratio=(double)temp3/(double)size;
    cout<<ratio<<setprecision(6);
}
