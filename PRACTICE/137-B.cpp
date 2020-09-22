/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    
    int n;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; i++){
    	cin>>t;
    	st.insert(t);
	}
	unordered_map<int,bool> mp;
	for(auto i : st){
		mp[i]++;
	}
    int ops=0;
    for(int i=0; i<n; i++){
    	if(mp[i+1]==0){
    		ops++;
		}
	}
	cout<<ops<<endl;
}

