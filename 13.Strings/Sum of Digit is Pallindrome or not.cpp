//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b=0,n,k=0;
        scanf("%d",&n);
        while(n>0)
        {
            a=n%10;
            b=b+a;
            n=n/10;
        }
        int m=b;
        while(m>0)
        {
            a=m%10;
            k=k*10+a;
            m=m/10;
        }
        if(b==k)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
