/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
    	string str;
    	cin>>str;
    	int s=0,p=0,r=0;
    	for(int i=0; i<str.size(); i++){
    		if(str[i]=='S') s++;
    		if(str[i]=='P') p++;
    		if(str[i]=='R') r++;
		}
		char ch;
		if(s>= r && s>=r){
			ch = 'R';
		}
		if(r>=s && r>=p){
			ch = 'P';
		}
		if(p>=r && p>=s){
			ch = 'S';
		}
		for(int i=0; i<str.size(); i++){
			cout << ch;
		}
		cout << endl;
	}
    
}

