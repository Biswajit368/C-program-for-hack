/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

for(int i=0;i<n;i++)
{
   int l=1;
    for(int j=0;j<n-i;j++)
    {
        cout<<l<<" ";
        l++;
    }
    cout<<"\n";
}
return 0;
}