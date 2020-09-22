/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int t;

unordered_map<string, int> mp;
unordered_map<string,int> mp2;

string solve(){
	
	mp2.clear();
	
	string s;
	
	cin >> s;
	
	string build = "";
	
	for(auto i : mp){
		cout << i.first <<"  " << i.second<<endl;
	}
	
	
	for(int i=0; i<s.size(); i++){
		if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z') ){
			if('A'<=s[i] && s[i]<='Z'){
				s[i]+=32;
			}
			build+=s[i];
		}
	}
		
	string str="";	
	
	for(int i=0; i<build.size(); i++){
		str+=build[i];
		if(mp.count(str)>0){
			mp2[str]++;
			str="";
		}
	}
	
	for(auto i:mp2){
		cout << i.first << "  " <<i.second << endl;
	}
	
	if(str!=""){
		return "WA";
	}
	
	if(mp2.size()!=mp.size()){
		return "WA";
	}
	
	for(auto i: mp){
		if(mp2[i.first]!=i.second){
			return "WA";
		}
	}
	return "ACC";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    mp.clear();
	for(int i=0; i<3; i++){
		string s;
		cin >> s;
		
		string build="";
		
		for(int i=0; i<s.size(); i++){
			if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z') ){
				if('A'<=s[i] && s[i]<='Z'){
					s[i]+=32;
				}
				build+=s[i];
			}
		}
		mp[build]++;
	}
	cin >> t;
	while(t--){
		cout << solve() << endl;
	}
    
}

