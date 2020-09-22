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
    vector<pair<ll,char>> vec(n); //(have,req)
    
    unordered_map<string,ll> mp;
    
    for(int i=0; i<n; i++){
    	
    	cin >> s;
    	
    	stack<ll> st;
    	ll l =0;
    	
    	for(int j=0; j<s.size(); j++){
    		if(s[j]==')'){
    			if(st.empty()){
    				l++;
				}
				else{
					st.pop();
				}
			}
			else{
				st.push('1');
			}
		}
		
		if(l!=0 && st.size()!=0){
			vec[i]={0,'N'};
		}
		else if(l==0 && st.size()==0 ){
			vec[i]={0,'O'};  //anything L or R doesnt matter
			mp["O"]++;
		}
		else if(l!=0){
			vec[i]={l,'L'};
			string s1 = to_string(l);
			string str = "L|"+s1;
			mp[str]++;
		}
		else if(st.size()!=0){
			vec[i]={st.size(),'R'};
		}
    	
	}
	
	
	ll ans=0;
	
	ll os = mp["O"];
	ans += (os*os);
	
	for(int i=0; i<n; i++){
		
		if(vec[i].second=='R'){
			string s1 = to_string(vec[i].first);
			s1 = "L|"+s1;
			ans += mp[s1];
		}
		
	}
	
    cout << ans << endl;
}

