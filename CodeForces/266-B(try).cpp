/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    
    while(t--){
    	for(int i=0; i<n-1; i++){
    		if(s[i]=='B' && s[i+1]=='G' ){
    			s[i]='G';
    			s[i+1]='B';
    			i++;
			}
		}
	}
    cout << s << endl;
}

