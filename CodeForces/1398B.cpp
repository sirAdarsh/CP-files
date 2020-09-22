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
    cin >> t;
    while(t--){
    	cin >> s;
    	int max=0;
    	int cur=0;
    	bool one=false;
    	vector<int> vec;
    	int n=s.size();
    	
    	for(int i=0; i<n; i++){
    		if(s[i]=='1'){
    			one=true;
    			cur++;
			}
			else{
				vec.push_back(cur);
				cur=0;
			}
		}
		vec.push_back(cur);
		sort(vec.begin(),vec.end(),greater<>());
//		for(auto i : vec){
//			cout << i <<" ";
//		}
		int ans=0;
		for(int i=0; i<vec.size(); i+=2){
			ans+=vec[i];
		}
		cout << ans << endl;
	}
    
}

