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
        int i = 1;
        int cnt = 0;
        
        while(pow(5,i) <= n){
            cnt += (n/pow(5,i));
            i++;
        }
        cout<<cnt<<"\n";
	}
	
	
    return 0;
}