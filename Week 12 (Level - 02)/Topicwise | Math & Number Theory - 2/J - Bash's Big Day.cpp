#include<bitset>
#include<set>
#include<stdio.h>
#include<string.h>
#include<stack>
#include<queue>
#include<cstring>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include <iostream>
#include<utility>
#include<climits>
#include<numeric>
using namespace std;
typedef long long ll;
typedef unsigned long ul;
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define f0(i,n) for (ll i=0;i<n;i++)
#define f1(i,n) for (ll i=1;i<=n;i++)
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Optimize is not allowed when I have to take input from input.txt file

void solve(){
    map<int,int> mp;
    int n,ans = 1,m1 = 0; cin>>n; vi v(n); f0(i,n) {cin>>v[i]; mp[v[i]]++;
        if(v[i]!=1) ans = max(ans,mp[v[i]]);}
    if(n==1) {cout<<1<<endl; return; }
    
    for(int i=0;i<n;i++){
        for(int j=2;j<=sqrt(v[i]);j++){
            if(v[i]%j==0){
                mp[j]++;
                ans = max(ans,mp[j]);
                if(v[i]/j!=j){
                    mp[v[i]/j]++;
                    ans = max(ans,mp[v[i]/j]);
                    
                    
                }
                
                
                
            }
            
            
        }
        
    }
    cout<<ans<<endl;
    
}
int32_t main(void){
    optimize();
    int tc = 1;

    while(tc--){
        solve();
        //debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
    }
    
    
    return 0;
}
