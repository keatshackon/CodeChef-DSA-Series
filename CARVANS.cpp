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
    while(t--){
        cin>>n;
        ll cnt = 0;
        q = 0;
        ll r = INT_MAX;
        while(n--){
            cin>>q;
            if(q <= r){
                cnt++;
            }
            r = q;
        }
        cout<<cnt<<"\n";
    }
    
    
    return 0;
}