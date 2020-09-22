/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int alpha[26];
string s;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    for(int i=0; i<s.size(); i++){
    	alpha[s[i]-'a']++;
	}
	int odds=0, evens=0;
	
	for(auto i : alpha){
		if(i%2) odds++;
		else evens++;
	}
    if(odds<2){
    	cout<<"First"<<endl;
	}
	else{
		if(odds%2){
			cout<<"First";
		}
		else{
			cout<<"Second"<<endl;
		}
	}
    
}

