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
    
    string s;
    cin>>s;
    unordered_map<char,bool> mp;
    char ch = 'a';
    for(int i=0; i<s.size(); i++){
    	if(s[i]>ch){
    		cout<<"NO"<<endl;
    		return 0;
		}
		else if(s[i]==ch){
			ch++;
		}
	}
    
    cout <<"YES"<<endl;
}

