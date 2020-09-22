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
ll t;
struct idx{
	ll date, month, year;
};

bool comp(idx i1, idx i2){  
	if(i1.year<i2.year){
		return true;
	} 
	else if(i1.year > i2.year) return false;
	else{
		if(i1.month<i2.month) return true;
		else if(i1.month > i2.month) return false;
		else return i1.date<i2.date;
	}
}



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    vector<idx> vec;
    
    while(t--){
    	
    	cin >> s;
    	string str;
    	vector<ll> v;
    	for(ll i=0; i<s.size(); i++){
    		if(s[i]=='/'){
    			v.pb(stoi(str));
    			str="";
			}
			else{
				str+=s[i];
			}
		}
    	v.pb(stoi(str));
    	ll d,m,y;
    	d = v[0]; m=v[1]; y=v[2];
		vec.pb({d,m,y});
	}
	
	sort(vec.begin(),vec.end(),comp);
	
	for(auto i : vec){
		cout << i.date << '/' << i.month << '/' << i.year << endl;
	}
    
}

