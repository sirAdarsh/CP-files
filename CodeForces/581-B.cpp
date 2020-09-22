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
    int arr[n];
    int maxx = 0;
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	vector<int> ans;
	
	ans.push_back(0);
	maxx = arr[n-1];
	
	for(int i=n-2; i>=0; i--){
		if(arr[i]<=maxx){
			ans.push_back(maxx+1-arr[i]);
		}
		else{
			ans.push_back(0);
		}
		maxx = max ( maxx , arr[i]);
	}
	
    reverse(ans.begin(), ans.end());
    for(auto i : ans){
    	cout << i <<' ';
	}
}

