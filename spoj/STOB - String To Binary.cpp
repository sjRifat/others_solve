#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		OO              10000000000
 
int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z=0,ar[200010];
    S(t);
    while(t--){
        string s,sa;
        cin>>s;
        ll sm=0;
        sort(all(s));
        sm+=s[0];
 
        for(i=1;i<zz(s);i++){
            if(s[i]!=s[i-1]) sm+=s[i];
        }
        while(sm){
            x=sm%2;
            if(x) sa.pb('1');
            else sa.pb('0');
            sm/=2;
        }
        reverse(all(sa));
        printf("#%lld : ",++z);
        cout<<sa<<nn;
    }
 
    return 0;
}
