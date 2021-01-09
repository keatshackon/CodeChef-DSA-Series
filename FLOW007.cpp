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

	ll t,n,k;
	cin>>t;
	while(t--){
        cin>>n;
        int res = 0;
        while(n){
            int r = n%10;
            res = res*10+r;
            n/=10;
        }
        cout<<res<<"\n";
    }
	
    return 0;
}