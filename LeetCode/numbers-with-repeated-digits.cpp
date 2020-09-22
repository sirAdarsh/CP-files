/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[20][2];

unordered_map< string, vector<string>> mr;

int solve(string s, int pos, int tight, int temp[]){
	
	
	if( pos==s.size() ){
		unordered_map<int,bool> mp;
		
		bool enc=false;
		
		for(int i=0; i<s.size(); i++){
			if(temp[i]!=0){
				enc=true;
			}
			if(enc){
				if( mp[temp[i]]==true ){
					return 1;
				}
				mp[temp[i]]=true;
			}
		}
		return 0;
		
	}
	
	
	int res = 0;
	
	if(tight){
		
		for(int i=0; i<=s[pos]-'0'; i++){
			
			if(i==s[pos]-'0'){
				temp[pos]=i;
				res += solve(s,pos+1,1, temp);
			}
			else{
				temp[pos]=i;
				res += solve(s,pos+1, 0, temp);
			}
		}
		
	}
	else{
		
		for(int i=0; i<=9; i++){
			temp[pos] = i;
			res += solve(s,pos+1, 0, temp);
		}
	}
	
	return res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    string s;
    s = to_string(n);
    int sz = s.size();
    int temp[sz];
    
    cout<<"s = "<<s<<" s.size() = "<<s.size()<<endl;
    cout<<solve(s,0,1,temp);
    
}

