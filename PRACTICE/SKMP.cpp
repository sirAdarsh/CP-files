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

string s1,s2;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cin >> s1 >> s2;
    	vector<int> ar(26,0);
    	for(int i=0; i<s1.size(); i++){
    		ar[s1[i]-'a']++;
		}
		for(int i=0; i<s2.size(); i++){
			ar[s2[i]-'a']--;
		}
		
		int first = s2[0]-'a';
		int last = s2[s2.size()-1]-'a';
		
		string pre="";
		string post="";
		
		for(int i=0; i<26; i++){
			
			if( i<first ){
				for(int j=0; j<ar[i]; j++){
					pre += (char)(i+'a');
				}
			}
			else if(i>last){
				for(int j=0; j<ar[i]; j++){
					post += (char)(i+'a');
				}
			}
			else if(i==first){
				for(int j=0; j<ar[i]; j++){
					pre += (char)(i+'a');
				}
			}
			else{
				for(int j=0; j<ar[i]; j++){
					post += (char)(i+'a');
				}
			}
			
		}
		
		cout << pre << s2 << post;
		
		cout << endl;
	}
    
}

