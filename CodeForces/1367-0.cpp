/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
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
    	string s;
    	cin >> s;
    	
    	string ans="";
    	ans+=s[0];
    	ans+=s[1];
    	for(int i=3;i<s.size();i++){
    		ans+=s[i];
    		i++;
		}
		cout << ans<<endl;
    	
	}
}

