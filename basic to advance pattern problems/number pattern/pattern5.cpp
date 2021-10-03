/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
for(int i=0;i<n;i++)
{
    int l=n;
    for(int j=0;j<=i;j++)
    {
        
        cout<<l<<" ";
        l--;
    }
    cout<<"\n";
}
return 0;
}
