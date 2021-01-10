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

	ll t,n,k,q,a,b,c;
	cin>>t;
	while(t--){
		cin>>n;
		while(n--){
			cin>>a>>b>>c;
			if(a == 1){
				if(b % 2 == 0){
					cout<<((b/2))<<"\n";
				}else{
					if(c == 1){
						cout<<((b/2))<<"\n";
					}else{
						
						cout<<((b/2)+1)<<"\n";
					}
				}
			}else{
				if(b % 2 == 0){
					cout<<((b/2))<<"\n";
				}else{
					if(c == 1){
						cout<<((b/2)+1)<<"\n";
					}else{
						cout<<((b/2))<<"\n";
					}
				}
			}
		}
	}
	return 0;
}