/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	string s;
    	for(int i=0; i<53; i++){
    		s+='b';
		}
		cout << s << endl;
		int p;
    	for(int i=0; i<n; i++){
    		cin >> p;
    		for(int j=0; j<53; j++){
    			if(j==p){
    				s[j]^=1;
    				cout<<s[j];
    				continue;
				}
				cout<<s[j];
			}
			cout << endl;
		}
	}
}

