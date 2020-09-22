/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

ll ans;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll d,p;
    cin >> d >> p;
    

    
    string sd;
    sd = to_string(d);
    
    int nines=0;
    for(auto it=sd.rbegin(); it!=sd.rend(); it++){
    	if(*it=='9'){
    		nines++;
		}
		else{
			break;
		}
	}
    ans = d;
    
    
    int sz=sd.size();
    
    int idx=sz-2;
    
    int diff=0;
    
    while(1){
    	
    	string tmp="";
    	
    	if(idx>=0){
    		
    		for(int i=0; i<=idx; i++){
    			tmp+=sd[i];
			}
    		
    		ll num = stoll(tmp);
    		num--;
    		tmp = to_string(num);
    		for(int i=idx+1; i<sz; i++){
    			tmp+='9';
			}
			num = stoll(tmp);
			
			int nyns=0;
			
			for(auto it=tmp.rbegin(); it!=tmp.rend(); it++){
		    	if(*it=='9'){
		    		nyns++;
				}
				else{
					break;
				}
			}
    		if(d-num<=p && nyns>=nines){
    			ans=num;
    			idx--;
			}
			else{
				break;
			}
    		
		}
		else{
			break;
		}
    	
	}
    
    cout << ans << endl;
}

