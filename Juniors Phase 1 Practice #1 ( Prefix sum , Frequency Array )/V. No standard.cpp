#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define mem(arr,value) memset(arr, value, sizeof(arr))
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.141592
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define Glitch ios_base::sync_with_stdio(false);cin.tie(0);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;


int main()
{

    Glitch;
    ll n,q; cin>>n>>q;
    ll arr[n]; rep(i,n)cin>>arr[i];
    ll start[n]={0};
    ll endd[n]={0};
    ll left[n]={0};
    rep(i,q){
    ll x,y; cin>>x>>y;
    start[x-1]++;
    endd[y-1]--;
    left[y-1]+=y-x+1;
    }
    ll cnt=0;
    ll len=0;
    bool flag=0;
   // for(int i=0  ; i<n ; i++)cout<<temp[i]<<" ";
   // cout<<endl;
    rep(i,n){
        if(start[i]>0)len+=start[i];

        if(len>0)flag=1;
        else flag=0;
        if(flag){
           cnt+=len;
        }else cnt=0;
        arr[i]+=cnt;
        if(endd[i]<0){
                len+=endd[i];
                cnt-=left[i];
        }

    }
    for(int i=0; i<n ;i++)cout<<arr[i]<<" ";
    return 0;

}