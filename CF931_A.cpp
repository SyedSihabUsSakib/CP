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
        deque<int>dq(n);
        for(auto &i:dq)
        {
            cin>>i;
        }
        int cnt =2;
        long long ans = 0;
        sort(dq.begin(),dq.end());
        while(cnt--)
        {
            ans += dq.back() - dq.front();
            ans += dq.back() - dq[1];
            dq.pop_back();
        }
        cout<<ans<<endl;
    }
}

