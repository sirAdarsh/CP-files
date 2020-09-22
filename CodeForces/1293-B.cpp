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
vector<int> mp(10,0);

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    
    ll n;
    
    while(t--){
    	cin >> n;
    	mp[n]++;
	}
	
	int q;
	cin >> q;
	while(q--){
		
		char op;
		cin >> op >> n;
		if(op=='+'){
			mp[n]++;
		}
		else{
			mp[n]--;
		}
		
		int g1=0;
		int g3=0;
		
		vector<int> mp2=mp;
		
		sort(mp2.begin(),mp2.end(),greater<>());
		
		int f=mp2[0];
		int sec = mp2[1];
		int th = mp2[2];
		
		if(f >= 4 ){
			int nm = f/4;
			f -= (4*nm);
			g3 += nm;
		}
		if(f>=2){
			g1++;
		}
		
		if(sec >= 4 ){
			int nm = sec/4;
			sec -= (4*nm);
			g3 += nm;
		}
		if(sec>=2){
			g1++;
		}
		
		if(th >= 4 ){
			int nm = th/4;
			th -= (4*nm);
			g3 += nm;
		}
		if(th>=2){
			g1++;
		}
		
		if((g1>1 && g3>=1) || g3>=2){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO"<<endl;
		}
		
	}
    
}

