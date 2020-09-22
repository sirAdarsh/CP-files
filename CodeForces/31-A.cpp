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
    
    unordered_map<int,int> mp;  // mp[integer] [idx]
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	mp[arr[i]]=i+1;
	}
	vector<int> vec;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j)continue;
			if(mp[arr[i]+arr[j]] != 0){
				cout << mp[arr[i]+arr[j]] << ' ' << i+1 << ' ' << j+1;
				return 0;
			}
		}
	}
	cout << -1 << endl;
    
}

