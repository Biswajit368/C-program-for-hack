/*
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l=1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
           cout<<l<<" ";
    }
    l++;
    cout<<"\n";
}
return 0;
}