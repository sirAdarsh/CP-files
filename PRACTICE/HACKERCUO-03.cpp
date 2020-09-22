/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    for(int m=1; m<=t; m++){
    	
    	int n;
    	cin >> n;
    	int pos[n];
    	int height[n];
    	
    	for(int i=0; i<n; i++){
    		cin >> pos[i] >> height[i];
		}
		
		unordered_map<int,int> mp;  // (int a -> pos, int b-> max length at a as end point
		
		for(int i=0; i<n; i++){
			
			int baap;
			baap = mp[pos[i]-height[i]];
			
			mp[pos[i]+height[i]] = max(mp[pos[i]+height[i]], mp[pos[i]]+height[i]); 
			
			mp[pos[i]] = max (mp[pos[i]], baap + height[i]);
			
		}
		
		int maxx = INT_MIN;
		
		for(auto i : mp){
			cout << i.first << ' '<< i.second << endl;
//			maxx = max(maxx,i.second);
		}
    	cout << maxx << endl;
	}
    
}

