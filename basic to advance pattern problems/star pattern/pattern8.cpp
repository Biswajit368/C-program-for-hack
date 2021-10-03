 /* print triangle
* * * * * 
  * * *
    * 
*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
for(int i=0; i<n; i++)
{
for(int j=0; j<(2*n-1); j++)
{
  if((j>=i) && (j<(n*2-1-i)))
  cout<<"*";
  else
  cout<<" ";
}
cout<<"\n";
}
return 0;
}