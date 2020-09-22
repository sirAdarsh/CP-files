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
    	string s;
    	cin >> s;
    	int o=0,z=0;
    	for(int i=0; i<s.size(); i++){
    		if(s[i]=='0') z++;
    		else o++;
		}
		
		int chances = min(o,z);
		
		(chances&1)?cout <<"DA"<<endl:cout<<"NET";
		
	}
    
}

