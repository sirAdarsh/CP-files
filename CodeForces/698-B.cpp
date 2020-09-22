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
    vector<int> arr(n+1);
    vector<int> tmp(n+1);
    unordered_map<int,bool> mp;
    for(int i=1;i<=n;i++){
    	cin >> arr[i];
    	if(i==arr[i]){
    		mp[i]++;
		}
    }
    
    int minn = INT_MAX;
    vector<int> ans(n+1);
    
	for(auto i : mp){
		
		int turns=0;
		
		for(int i=1; i<=n; i++){
			tmp[i]=arr[i];
		}
		
		int par = i.first;
		
//		for(auto i : tmp){
//			cout << i << ' ';
//		}
//		cout << endl;
//		cout << par << endl;
		
		for(int i=1; i<=n; i++){
			if(i==par){
				continue;
			}
			if(tmp[i]==i){
				tmp[i]=par;
				turns++;
			}
		}
		if(turns<minn){
			minn=turns;
			for(int i=1; i<=n; i++){
				ans[i]=tmp[i];
			}
		}
	}
	
	cout << minn <<endl;
	for(auto i : ans){
		if(i!=*ans.begin())
		cout << i << ' ';
	}
	cout << endl;
	
}

