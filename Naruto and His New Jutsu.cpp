#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int64_t sum=0,k=sqrt(n),l;
        for(int64_t i=1;i<=k;i++)
        {
            if(n%i==0)
            {
                if(i%2==1)
                    sum+=i;
                
                l=n/i;
                
                if(l%2==1 && l!=i)
                {
                    sum+=l;
                }
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}