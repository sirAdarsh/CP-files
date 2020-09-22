/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    unordered_map<string,string> mp;
    string str1,str2;
    while(m--){
    	cin >> str1 >> str2;
    	mp[str1] = (str1.size()>str2.size())?(str2):(str1);
//    	cout << mp[str1];
	}
	while(n--){
		cin>>str1;
		cout << mp[str1] <<" ";
	}
    
}

