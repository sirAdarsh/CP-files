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
    string s;
    cin >> s;
    string max="-1";
    for(int i=0; i<s.size(); i++){
    	if((s[i]-'0')%2==0){
    		swap(s[i],s[s.size()-1]);
    		max = s;
			break;
		}
	}
    cout << max << endl;
}

