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
    cin >> s;
    vector<char> v;
    for(int i=0; i<s.size(); i++){
    	if(s[i]!='+') v.push_back(s[i]);
	}
	sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
    	if(i==v.size()-1) {
    	cout<<v[i];break;	
		}
    	cout << v[i] <<"+";
	}
}

