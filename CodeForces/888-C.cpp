/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
string s;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> s;
    vector<int> alpha[26];
    
    for(int i=0; i<26; i++){
    	alpha[i].push_back(-1);
	}
	
	for(int i=0; i<s.size(); i++){
		char ch = s[i];
		alpha[ch-'a'].push_back(i);
	}
	
	vector<int> maxs;
	maxs.push_back(s.size());
	
	for(int i=0; i<26; i++){
		alpha[i].push_back(s.size());
	}
	
	int diff;
	
	for(int i=0; i<26; i++){
		int max = -1;
		for(int j=1; j<alpha[i].size(); j++){
			diff = alpha[i][j]-alpha[i][j-1];
			if(diff>max){
				max = diff;
			}
		}
		if(max!=-1) maxs.push_back(max);
	}
	
	int ans;
	ans = *min_element(maxs.begin(),maxs.end());
	cout << ans << endl;
    
}

