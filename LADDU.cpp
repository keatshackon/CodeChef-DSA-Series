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
        string s,a;
        cin>>n>>s;
        
        int sum = 0;
        while(n--){
            cin>>a;
            
            if( a == "CONTEST_WON"){
                int b = 0;
                cin>>b;
                if(b<=20){
                    sum = sum + (300 + (20 - b));                   
                }else{
                    sum = sum + 300 ;
                }
                
            
            }else if(a == "TOP_CONTRIBUTOR"){
                sum += 300;    
            
            }else if(a == "BUG_FOUND"){
                int b = 0;
                cin>>b;
                sum  = sum + b;
            }else if(a == "CONTEST_HOSTED"){
                sum += 50;
            }
            
        }
        
        if(s == "INDIAN"){
            cout << sum / 200 << endl;
        }else{
            cout <<  sum/ 400 << endl;
        }
        
	    
	}
	
	
    return 0;
}