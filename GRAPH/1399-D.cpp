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

string s;
int t;

void solve(){
	
	char last = s[0];
	
	int subs = 1;
	
	cout << subs << ' ';
	
	for(int i=1; i<s.size(); i++){
		
		if(last!=s[i]){
			cout << 1 << ' ';
		}
		else{
			subs++;
			cout << subs << ' ';
		}
		
		last = s[i];
		
	}
	
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
    	cin >> s;
    	
    	solve();
    	cout << endl;
    	
	}
    
}

