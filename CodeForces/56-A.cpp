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
    unordered_map<string,int> mp;
    mp["ABSINTH"]++;
    mp["BEER"]++;
    mp["BRANDY"]++;
    mp["CHAMPAGNE"]++;
    mp["GIN"]++;
    mp["RUM"]++;
    mp["SAKE"]++;
    mp["TEQUILA"]++;
    mp["VODKA"]++;
    mp["WHISKEY"]++;
    mp["WINE"]++;
    int ans=0;
    while(t--){
    	cin >> s;
    	if(s[0]<=57){
    		int age = stoi(s);
    		if(age<18)ans++;
		}
		else{
			if(mp[s]){
				ans++;
			}
		}
	}
	cout << ans << endl;
}

