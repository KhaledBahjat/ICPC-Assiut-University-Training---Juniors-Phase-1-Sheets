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
    ll n,k; cin>>n>>k;
    map<ll,ll>mp;
    ll arr[n];
    rep(i,n){
    cin>>arr[i];
    mp[arr[i]]++;
    }
    sort(arr,arr+n);
    set<pair<ll,ll>>s;
    ll ans=0;
    rep(i,n){
    if(mp[k-arr[i]]!=0 && s.count({k-arr[i],arr[i]})==0 && s.count({arr[i],k-arr[i]})==0 ){
        if(arr[i]==k-arr[i] && mp[arr[i]]==1)break;
        else if(arr[i]==k-arr[i]){
            ll x=mp[arr[i]];
            x--;
            ans+=(x*(x+1))/2;
            s.insert({arr[i],k-arr[i]});
         // cout<<k-arr[i]<<" "<<arr[i]<<endl;
        }else{
        ans+=mp[k-arr[i]]*mp[arr[i]];
       // cout<<k-arr[i]<<" "<<arr[i]<<endl;
        s.insert({arr[i],k-arr[i]});
        }
        //cout<<s.sz<<endl;
    }
    }
    cout<<ans;
    return 0;

}