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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
    	cin >> t;
    	mp[t]++;
	}
	int ans=0;
	for(auto i : mp){
		if(i.first==0){
			continue;
		}
		else if(i.second>2){
			cout << -1;
			return 0;
		}
		else if(i.second==2){
			ans++;
		}
	}
    cout << ans << endl;
}

