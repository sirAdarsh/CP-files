/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

string solve(int alpha[]){
	
	for(int i=0; i<26; i++){
		if(alpha[i]%2){
			return "NO";
		}
	}
	return "YES";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string s;
    cin >> s;
    int alpha[26];
    for(int i=0; i<26; i++){
    	alpha[i]=0;
	}
	for(int i=0; i<s.size(); i++){
		alpha[s[i]-'a']++;
	}
	cout<<solve(alpha)<<endl;
	}
    
    
}

