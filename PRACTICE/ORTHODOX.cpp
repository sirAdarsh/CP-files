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
int t;
unordered_map<int,bool> mp;

string solve(int arr[], int n){
	
	int x = arr[0];
	
	for(int i=1; i<n; i++){
		x ^= arr[i];
		if(mp[x]){
			printf("%d\n",x);
			return "YES";
		}
		mp[x]++;
	}
	return "NO";
}

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
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		cout << solve(arr,n)<<endl;
		
	}
}

