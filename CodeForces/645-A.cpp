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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    
    string bld1="",bld2="";
    
    for(auto i : a){
    	if(i!='X'){
    		bld1+=i;
		}
	}
	string tmp="";
	for(int i=1; i>=0; i--){
    	if(b[i]!='X'){
    		tmp+=b[i];
		}
	}
	bld1+=tmp;
	for(auto i : c){
    	if(i!='X'){
    		bld2+=i;
		}
	}
	tmp="";
	for(int i=1; i>=0; i--){
    	if(d[i]!='X'){
    		tmp+=d[i];
		}
	}
	bld2+=tmp;
	
	bld2+=bld2;
	
	for(int i=0; i<bld2.size()-3; i++){
		if(bld2.substr(i,3)==bld1){
			cout<<"YES";
			return 0;
		}
	}
    cout << "NO";
}

