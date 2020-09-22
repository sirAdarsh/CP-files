/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
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
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	
	vector<int> ans;
	
	set<int> st;
	int sz=0;
	unordered_map<int,bool> mp;
	
	for(int i=0; i<n; i++){
		
		sz++;
		
		if(ar[i]<0){
			if(st.find(-1*ar[i])==st.end()){
				cout << -1;
				return 0;
			}
			else{
				st.erase(st.find(-1*ar[i]));
			}
			if(st.size()==0){
				ans.pb(sz);
				sz=0;
				mp.clear();
			}
		}
		else{
			if(mp[ar[i]]){
				cout<<-1;
				return 0;
			}
			if(st.find(ar[i])!=st.end()){
				cout << -1;
				return 0;
			}
			else{
				st.insert(ar[i]);
				mp[ar[i]]=true;
			}
		}
		
	}
	
	if(st.size()!=0){
		cout<<-1 << endl;
		return 0;
	}
	cout << ans.size()<<endl;
	for(auto i : ans){
		cout << i << ' ';
	}
	
}

