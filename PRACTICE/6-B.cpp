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
    
    int n,m;
	char c;
    cin >> n >> m >> c;
    char tab[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> tab[i][j];
		}
	}
    
    unordered_map<char,bool> mp;
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		if(tab[i][j]==c){
    			if(i+1<n && tab[i+1][j]!='.') mp[tab[i+1][j]]=1;
    			if(j+1<m && tab[i][j+1]!='.') mp[tab[i][j+1]]=1;
    			if(i-1>=0 && tab[i-1][j]!='.') mp[tab[i-1][j]]=1;
    			if(j-1>=0 && tab[i][j-1]!='.') mp[tab[i][j-1]]=1;
			}
		}
	}
	
	for(auto i : mp){
		cout << i.first <<" "<<i.second << endl;
	}
	
	int ans = mp.size();
	
	if(mp[c]==1) ans--;
    cout << ans << endl;
}

