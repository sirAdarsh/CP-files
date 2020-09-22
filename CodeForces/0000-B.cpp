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
    int num = 12;
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
    	cin >> ar[i];
    	if(ar[i]%2==0){
    		
    		num=min(num,ar[i]);
		}
		mp[ar[i]]++;
	}
	if(num==12){
		cout << -1;
	}
	else{
		mp[num]--;
		vector<int> vec;
		for(auto i : mp){
			for(int j=0; j<i.second; j++){
				vec.pb(i.first);
			}
		}
		sort(vec.begin(),vec.end(),greater<>());
		for(auto i : vec){
			cout << i;
		}
		cout << num;
	}
}

