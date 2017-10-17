#include<bits/stdc++.h>
#define ii          int int
#define ll          long long
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define ps          pair<string,string>
#define mod         1000000007
#define INF         1e18
#define PI          acos(-1)
#define si(a)       scanf("%d",&a)
#define ss(a)           scanf("%s",a);
#define sii(a,b)    scanf("%d%d",&a,&b)
#define siii(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sL(a)       scanf("%I64d",&a)
#define sll(a,b)    scanf("%lld%lld",&a,&b)
#define sLL(a,b)        scanf("%I64d%I64d",&a,&b)
#define slll(a,b,c)     scanf("%lld%lld%lld",&a,&b,&c)
#define sLLL(a,b,c)    scanf("%I64d%I64d%I64d",&a,&b,&c)

//geometry
#define EPS 1e-12
#define _abs(x)    (((x)>0)?(x):-(x))
#define _max(x,y)  ( ((x)>(y))?(x):(y))
#define _min(x,y)  ( ((x)<(y))?(x):(y))

#define E(x,y)  (_abs((x)-(y)) < EPS)
#define Z(x)    (_abs(x) < EPS)
#define ZN(x)   (x < 0 || Z(x))
#define ZP(x)   (x > 0 || Z(x))

//END
#define FR(i,a,b)   for(ll i=(a);i<(b);i++)
#define F           first
#define S           second
#define pb          push_back

#define mp          make_pair
#define bg          begin()
#define en          end()
#define mem(a,b)    memset(a,b,sizeof(a))
#define vsort(v)        sort(v.begin(),v.end())
#define REV(v)         reverse(v.begin(),v.end())
#define RET            return(0)
#define  _               ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    int t;
    si(t);
    int cs=1;
    while(t--)
    {
        ll s;
        sl(s);
        ll x=sqrt(s-1);
        x++;
        if(x%2)
        {
            ll row,col;
            ll aa=(x-1)*(x-1);
            aa++;
            //cout<<x<<' '<<aa<<endl;
            ll dif=s-aa;
            if(dif<x)
            {
                col=x;
                row=1+dif;

            }
            else{
                row=x;
                col=x-(dif-x+1);
            }
            printf("Case %d: %lld %lld\n",cs++,col,row);
        }
        else{
            ll row,col;
            ll aa=(x-1)*(x-1);
            aa++;
            ll dif=s-aa;
            if(dif<x)
            {
                row=x;
                col=1+dif;

            }
            else{
                col=x;
                row=x-(dif-x+1);
            }
            printf("Case %d: %lld %lld\n",cs++,col,row);
        }
    }
    RET;
}
