/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(string s){
	
	stack<char> st;
	
	int unParent=0;
	
	int ops=0;
	
	
	for(int i=0; i<s.size(); i++){
		
		if(s[i]=='{'){
			st.push('{');
		}
		else{
			if(st.size()!=0){
				st.pop();
			}
			else{
				unParent++;
			}
		}
	}
	
	
	if(unParent!=0){
		
		ops = ops + (unParent/2);
		
		if(unParent%2){
			ops+=2;
		}
		
	}
	
	
	if(!st.empty()){
		int sz = st.size();
		ops = ops + (sz/2);
	}
	return ops;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t=1;
    
    while(1){
    	string s;
    	cin >> s;
    	if(s[0]=='-'){
    		break;
		}
		cout << t<<". " << solve(s) << endl;
		t++;
	}
    
}

