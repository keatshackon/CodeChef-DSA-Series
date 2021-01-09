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
    string s;
	while(t--){
        cin>>s;
        int i = 0;
        int j = s.length()-1;
        std::vector<int> v(26,0);
        while(i <(s.size()/2)){
            v[s[i] - 'a']++;
            v[s[j] - 'a']--;
            i++;
            j--;
        }
        int f = 0;
        for(auto q:v){
            if(q > 0){
                cout<<"NO\n";
                f = 1;
                break;
            }
        }
        if(f == 0){
            cout<<"YES\n";
        }
        
    }
	
    return 0;
}