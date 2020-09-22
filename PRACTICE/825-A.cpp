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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ans;
    bool mil=false;
    int cnt1=0;
    for(int i=0; i<n; i++){
    	if(s[i]=='0'){
    		if(mil){
    			mil=false;
    			if(cnt1!=0)ans.push_back(cnt1);
    			cnt1=0;
			}
			else{
				ans.push_back(0);
				mil = true;
			}
		}
		else{
			cnt1++;
			mil = true;
		}
	}
    if(cnt1!=0)ans.push_back(cnt1);
    for(auto i: ans){
    	cout << i;
	}
}

