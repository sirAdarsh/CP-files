/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int t;

vector<int> solve(string s){
	
	vector<int> vec;
	
	unordered_map<char,int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]=i;
	}
	
	set<int> v;
	
	int cur_idx;
	int last_idx=-1;
	
	for(int i=0; i<s.size(); i++){
		
		if(i==last_idx){
			v.insert(i);
		}
		last_idx=max(last_idx,mp[s[i]]);
		if(i==last_idx){
			v.insert(i);
		}
		
	}
	
	vector<int> tmp;
	for(auto i : v){
		tmp.pb(i);
	}
	
	for(int i=0; i<tmp.size(); i++){
		if(i==0){
			vec.pb(tmp[i]+1);
		}
		else{
			vec.pb(tmp[i]-tmp[i-1]);
		}
	}
	return vec;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    
    vector<int> ans = solve(s);
    
    for(auto i:ans){
    	cout << i << ' ';
	}
    
}

