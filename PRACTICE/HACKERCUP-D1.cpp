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
int n,m;

unordered_map<int,bool> mp1;
unordered_map<int,int> mp2;

int solve( int fuel, int cities[], int curr_idx ){
	
	if(curr_idx + fuel >=n-1){
		return 0;
	}
	int minn = MOD;
	bool e =false;
	for(int i=curr_idx; i<curr_idx+fuel+1; i++){
		
		if(cities[i]!=0){
			e=true;
			int ch =  cities[i] + solve(fuel+m-1, cities, curr_idx+1);
			if(ch != -1){
				minn = min(minn, cities[i] + solve(fuel+m-1, cities, curr_idx+1));
			}
		}
		
	}
	if(!e) return -1;
	return minn;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    for(int h=1; h<=t; h++){
    	
    	cin >> n >> m;
    	
    	int arr[n];
    	for(int i =0; i<n; i++){
    		cin >> arr[i];
		}
		
		cout << solve(m,arr,0);
    	
	}
    
}

