#include <bits/stdc++.h>
using namespace std;


    
    

long long int countDivisors(long long int n);
long long int power(long long x, unsigned int y, int p)
{
   long long  int res = 1;     
 
    x = x % p; 
  
    if (x == 0) return 0; 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
        
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
long long int countDivisors(long long int n) { 
    long long int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            
            if (n / i == i) 
                cnt++; 
  
            else 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int p = 1000000007;
    long long int n,m;
    cin>>n>>m;
   long long  int sum=0;
    for(int i=1;i<=n;i++)
    {
    sum=sum+(power(i, m, p)*countDivisors(i));

    }
    cout<<sum<<endl;
    return 0;
}