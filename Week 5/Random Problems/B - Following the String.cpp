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
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

//Optimize is not allowed when I have to take input from input.txt file
void solve(){
    int n; cin>>n; vector<int> v(n);
    vector<int> str(26,-1);
    for(int i=0;i<n;i++){
        int a; cin>>a;
        for(int j=0;j<26;j++){
            if(str[j]==a-1){
                char c = 'a'+j;
                cout<<c; str[j]++; break;
            }
        }
    }
    cout<<endl;
    
}
int main(void){
    optimize();
    ll tc=1; cin>>tc;
    while(tc--) solve();
    
    
    return 0;
}
