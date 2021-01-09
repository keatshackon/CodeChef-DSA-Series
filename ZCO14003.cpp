/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define T while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;


int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t,n,k,q;
    cin>>t;
    std::vector<ll> v;
    while(t--){
        cin>>q;
        v.push_back(q);
    }
    sort(v.begin(), v.end());
    ll res = INT_MIN;
    int j = 1;
    for(ll i = v.size()-1;i >= 0;i--){
        if((v[i] * j) > res){
            res = (v[i] * j);
        }
        j++;
    }
    cout<<res;
    
    
    return 0;
}