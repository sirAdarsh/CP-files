#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    unordered_map<string,int> m;
    while(n--){
    	
    	string s;
    	cin >> s;
    	m[s] ++;
    	
    	if(m[s]==1){
    		cout<<"OK"<<endl;
		}
		else{
			
			cout<<s<<(m[s]-1)<<endl;
			
		}
    	
	}
    
}
