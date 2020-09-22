/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	
    	cin >> s;
    	unordered_map<char,int> mp;
    	for(int i=0; i<s.size(); i++){
    		mp[s[i]]++;
		}
		if(mp.size()<=2){
			cout << 0 << endl;
		}
		else{
			
			vector<int> vec;
			for(auto i : mp){
				vec.push_back(i.second);
			}
			sort(vec.begin(), vec.end());
			int sum =0 ;
			
			for(int i=0; i<vec.size()-2; i++){
				sum += vec[i];
			}
			cout << sum << endl;
			
		}
    	
	}
}

