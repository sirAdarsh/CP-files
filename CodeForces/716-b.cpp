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
    cin >> s;
    bool ok=false;
    for(int i=0; i<s.size(); i++){
    	
    	vector<int> chars(26,0);
    	bool k=false;
    	if(i+25<s.size()){
    		for(int j=i; j<i+26; j++){
	    		if(s[j]!='?'){
	    			if(chars[s[j]-'A']!=0){
	    				k=true;
	    				break;
					}
					else{
						chars[s[j]-'A']++;
					}
				}
			}
			if(!k){
				ok=true;
			}
		}
    	
		
		if(ok){
			int ptr=0;
			for(int j=i; j<i+26; j++){
				if(s[j]=='?'){
					for( ; ptr<26; ptr++){
						if(chars[ptr]==0){
							s[j]=alpha[ptr]-32;
							ptr++;
							break;
						}
					}
				}
			}
			break;
		}
	}
	
	if(!ok){
		cout << -1 ;
	}
	else{
		
		for(char i : s){
			if(i=='?'){
				cout<<'A';
			}
			else{
				cout <<i;
			}
		}
		
	}
	
    
}

