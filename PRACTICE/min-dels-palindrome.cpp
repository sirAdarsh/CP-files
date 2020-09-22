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

string s;
int t;

int minDels(string S, int l, int r, auto &lookup){
	if(l>=r){
		return 0;
	}
	string key = to_string(l)+"|"+to_string(r);
	
	if(lookup.find(key)==lookup.end()){
		
		if(S[l]==s[r]){
			lookup[key]=minDels(S,l+1,r-1,lookup);
		}
		else{
			lookup[key]=min(minDels(S,l+1,r,lookup),minDels(S,l,r-1,lookup))+1;
		}
		
	}
	
	return lookup[key];
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    
    int l=0,r=s.size()-1;
    unordered_map<string,int> lookup;
    cout << minDels(s,l,r,lookup);
    
}

