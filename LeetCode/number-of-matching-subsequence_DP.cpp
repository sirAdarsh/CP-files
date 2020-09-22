/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(string s, vector<string> words){
	
	vector<int> chars[27];
	
	for(int i=0; i<s.size(); i++){
		chars[s[i]-97].push_back(i);
	}
	
	
	int count=0;
	
	for(auto str : words){
		
		int ptr=-1;
		bool e =false;
		
		for(int i=0; i<str.size(); i++){
			if( upper_bound( chars[str[i]-'a'].begin(), chars[str[i]-'a'].end(), ptr )!=chars[str[i]-'a'].end() ){
				ptr = *(upper_bound(chars[str[i]-'a'].begin(), chars[str[i]-'a'].end(), ptr)) ;
			}
			else{
				e=true;
				break;
			}
		}
		if(!e){
			count++;
		}
		
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    vector<string> words={"a", "bb", "acd", "ace"};
    
    cout<<solve(s,words);
    
}

