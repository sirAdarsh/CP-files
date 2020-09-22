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
vector<string> vec(3);

string solve(){
	
	string build="";
	
   	for(int i=0; i<s.size(); i++){
   		if(('a'<=s[i]&&s[i]<='z') || ('A'<=s[i] && s[i]<='Z')){
   			if('A'<=s[i] && s[i]<='Z'){
				s[i]+=32;
			}
			build+=s[i];
		}
	}
	
	do{
		string str="";
		for(auto i: vec){
			str += i;
		}
		if(str==build){
			return "ACC";
		}
	}	
	while(next_permutation(vec.begin(),vec.end()));	
		
		return "WA";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   
    
    for(int j=0; j<3; j++){
    	cin >> s;
    	string build="";
    	for(int i=0; i<s.size(); i++){
    		if(('a'<=s[i]&&s[i]<='z') || ('A'<=s[i] && s[i]<='Z')){
    			if('A'<=s[i] && s[i]<='Z'){
					s[i]+=32;
				}
				build+=s[i];
			}
		}
		vec.push_back(build);
	}
	
	
	cin >> t;
	while(t--){
		sort(vec.begin(), vec.end());
		cin >> s;
		cout << solve()<<endl;
	}
    
}

