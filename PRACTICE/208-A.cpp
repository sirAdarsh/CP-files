/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    bool e = false;
    for(int i=0; i<s.size(); i++){
    	if(i+2<s.size()){
    		if(s.substr(i,3)!="WUB"){
    			cout<<s[i];
    			e=true;
			}
			else{
				if(e) cout<<" ";
				i+=2;
			}
		}
		else{
			cout<<s[i];
		}
	}
    
}

