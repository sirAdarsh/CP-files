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
    
    int n;
    cin >> n;
    cin >> s;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	int minn = INT_MAX;
	bool met = false;
	for(int i=0; i<n; i++){
		if(i+1<n){
			string build = "";
			build +=s[i];
			build +=s[i+1];
			if(build == "RL"){
				met = true;
				minn = min( minn, ( arr[i+1]- arr[i] )/2 );
			}
		}
	}
    
    if(met){
    	cout << minn << endl;
    	return 0;
	}
	cout << -1 << endl;
    
}

