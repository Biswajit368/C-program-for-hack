/*
Butterfly pattern using stars

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(j<=i)
        cout<<"* ";
        else
        cout<<"  ";
    }
    for(int j=0;j<n;j++)
    {
        if((i+j)>=n-1)
        cout<<"* ";
        else
        cout<<"  ";
    }

    cout<<"\n";
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if((i+j)<=n-1)
        cout<<"* ";
        else
        cout<<"  ";
        
    }
    for(int j=0;j<n;j++)
    {
        if(j>=i)
        cout<<"* ";
        else
        cout<<"  ";
        
    }

    cout<<"\n";
}
return 0;
}