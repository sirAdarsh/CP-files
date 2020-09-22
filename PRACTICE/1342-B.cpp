/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
bool alt(string s){
	char f=s[0];
	for(int i=1; i<s.size(); i++){
		if(s[i]!=f){
			return true;
		}
	}
	return false;
}

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
    	int f = (s[0]-'0');
    	int len=s.size();
    	if(alt(s)){
    		for(int i=0; i<2*len; i++){
    			cout << f;
    			f^=1;
			}
			cout<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}
    
}

