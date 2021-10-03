 /* print triangle
    
    * 
  * * *
* * * * * 
*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
for(int i=0; i<n; i++)
{

for(int k=0; k<=(2*n-1); k++)
{
if((k>=(n-1-i)) && (k<=(n-1+i)) )
cout<<"*";
else
cout<<" ";
}
cout<<"\n";
}
return 0;
}