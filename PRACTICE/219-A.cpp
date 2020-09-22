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
    
    int k;
    cin >> k;
    
    cin >> s;
    
	vector<int> chars(26,0);
	
	for(int i=0; i<s.size(); i++){
		chars[s[i]-'a']++;
	}
	
	string build="";
	
	for(int i=0; i<26; i++){
		if(chars[i]%k){
			cout<<-1;
			return 0;
		}
		else{
			int div= chars[i]/k;
			for(int j=0; j<div; j++){
				build += (char)(i+'a');
			}
		}
	}
    for(int i=0; i<k; i++){
    	cout << build;
	}
}

