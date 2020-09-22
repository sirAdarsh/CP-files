#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	int n, c;
	cin >> n >> c;
	string s;
	cin >> s;
	unordered_map<char,bool> m;
	while(c--){
		char p;
		cin >> p;
		m[p]=true;
	}
	
	ll ans = 0;
	
	ll l = 0;
	
	ll ansFinal=0;
	
	for(int i=0 ; i<n ; i++){
		
		if(m.find(s[i]) != m.end()){
			
			l ++;
			ans = (l)*(l+1)/2;
		}
		else{
			ansFinal += ans;
			l=0;
			ans=0;
		}
		
	}
	if(ans!=0){
		ansFinal+=ans;
	}
	cout<<ansFinal<<endl;
	
}
