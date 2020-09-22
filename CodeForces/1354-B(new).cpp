/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool check(int o,int tw, int th){
	if(o>=1 && tw>=1 && th>=1){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n1=-1,n2=-1,n3=-1;
    	string s;
    	cin >> s;
    	int sz = s.size();
    	
    	int minn = INT_MAX;
    	
    	for(int i=0; i<sz; i++){
    		
    		int len;
    		
    		if(s[i]=='1')n1=i;
    		if(s[i]=='2')n2=i;
    		if(s[i]=='3')n3=i;
    		
    		if(n1!=-1 && n2!=-1 && n3!=-1){
    			
    			int mn,mx;
    			mn = min(n1,n2);
    			mn = min(mn,n3);
    			mx = max(n1,n2);
    			mx = max(mx,n3);
    			
    			
    			len = mx-mn+1;
    			if(len<minn){
    				minn = len;
				}
			}
    		
		}
		
		if(minn==INT_MAX) cout << 0 <<endl;
		else cout << minn <<endl;
    	
	}
    
}

