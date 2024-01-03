#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    string arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i=0; i<10; i++)
    {
        if(n==i+1)
        {
            cout<<arr[i];
            break;
        }
        else if(n<1)
        {
            cout<<"Wrong input";
            break;
        }
        else if(n>9)
        {
            cout<<"Greater than 9";
            break;
        }
    }
    return 0;
}
