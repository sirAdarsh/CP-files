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
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int ar[n];
    	unordered_map<int,int> mp;
    	
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		mp[ar[i]]++;
		}
		
		unordered_map<int,int> mp2;
		
		for(auto i : mp){
			mp2[i.second]++;
		}
		
		unordered_map<int,int> chk;
		
		for(auto i : mp2){
			
			if(chk.find(i.first) == chk.end() ){
				chk[i.first]=i.second;
			}
			else{
				chk[i.first]=min(chk[i.first],i.second);
			}
			
		}
		
		
//		for(auto i : chk){
//			cout << i.first <<' ' << i.second << endl;
//		}
		
		vector<int> vec;
		for(auto i : chk){
			vec.pb(i.second);
		}
		sort(vec.begin(),vec.end());
		
		int maxx = *vec.rbegin();
		
		for(auto i : chk){
			if(i.second==maxx){
				cout << i.first << endl;
				break;
			}
		}
			
	}
}

