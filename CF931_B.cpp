
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define ff first
#define ss second
#define p pair<ll,ll>
#define pb push_back
#define endl '\n'
#define w(t) ll test;cin>>test;while(test--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define iof  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define pi acos(-1)
ll fx[]={0,0,1,-1,1,1,-1,-1};
ll fy[]={1,-1,0,0,-1,1,-1,1};
const ll mxn=1e9+7;



int main()
{
    w(t)
    {
       int n;
       cin>>n;
       int ans = 0;
       while(n>0)
       {
            if(n>=15)
       {
           ans += n/15;
           n%=15;
       }
       else if(n>=10)
       {
           ans += n/10;
           n%=10;
       }
       else if(n>=6)
       {
           ans += n/6;
           n%=6;
       }
       else if(n>=3)
       {
           ans += n/3;
           n%=3;
       }
       else if(n>=1)
       {
           ans += n/1;
           n=0;
       }
       }
       cout<<ans<<endl;
    }
}

