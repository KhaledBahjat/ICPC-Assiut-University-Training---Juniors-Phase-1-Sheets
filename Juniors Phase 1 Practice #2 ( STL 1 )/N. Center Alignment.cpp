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
    vector<string>v;
    string s;
    ll mx=0;
    bool flag=0;
    while(getline(cin,s)){
        v.push_back(s);
        mx=max(mx,(ll)s.sz);
    }
    rep(i,mx+2)cout<<"*";
    //for(auto it:v)cout<<it<<endl;
    cout<<endl;
    rep(i,v.sz){
    ll x=mx-v[i].sz;
    if(x%2==1 && flag==0) { x/=2;flag=1;}
    else if(x%2==1 && flag==1) {x=ceil((x*1.0)/2);flag=0;}
    else x/=2;
   // cout<<x<<endl;
    for(int j=0 ; j<=mx+1 ; j++){
          //  cout<<j<<" ";
          //cout<<mx<<endl;
    if(j==0)cout<<'*';
    else if(j==mx+1)cout<<'*';
    else if(j==x+1){
          // cout<<"fddffsd";
            cout<<v[i];
            if(v[i].sz!=0)
            j+=v[i].sz-1;
            else cout<<" ";

    }else cout<<" ";
    }
    cout<<endl;
    }
    rep(i,mx+2)cout<<"*";
    //for(auto it:v)cout<<it<<endl;




    return 0;
}