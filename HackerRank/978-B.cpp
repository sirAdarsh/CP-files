/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
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
    vector<int> cons;
    int len=0;
    for(int i=0; i<n; i++){
    	if(s[i]!='x'){
    		if(len>=3){
    			cons.push_back(len);
			}
			len=0;
		}
    	else len++;
	}
	if(len>3){
		cons.push_back(len);
	}
    int ans=0;
    for(auto i : cons){
    	ans += (i-2);
	}
	cout << ans << endl;
}

