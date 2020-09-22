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
    
    string s;
    cin >> s;
    int m;
    cin >> m;
    int q=0;
    int sz = s.size();
    
   	unordered_map<int,int> mp;
   	while(m--){
   		int n; cin >> n; mp[n-1]++;
	}
	bool ch[sz/2];
	for(int i=0; i<sz/2; i++){
		q += mp[i];
		if(q%2==0) ch[i]=0;
		else ch[i]=1;
	}
    for(int i=0; i<sz/2; i++){
    	if(ch[i]){
    		swap(s[i],s[sz-1-i]);
		}
	}
    cout << s << endl;
}

