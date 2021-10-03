/* print 
1 
2 3
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int l=1;
for(int i=1;i<n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<l<<" ";
        l++;
    }
    cout<<"\n";
}
return 0;
}