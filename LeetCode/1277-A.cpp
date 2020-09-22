/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string s = to_string(n);
    	
    	int digs = s.size();
    	
    	int ans=0;
    	
		ans = (digs-1)*9;
		
		int f = s[0]-'0';
		
		ans += (f-1);
		
		bool e =false;
		for(int i=0; i<digs; i++){
			if(s[i]-'0'>f){
				break;
			}
			if(s[i]-'0'<f){
				e=true;
				break;
			}
		}
    	if(!e){
    		ans += 1;
		}
		cout << ans << endl;
	}
}

