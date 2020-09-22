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
ll n;

int dp[100001][10];  // dp[curr_pos] [leftRem}

int solve(int arr[], int leftRem, int stepRem, int currPos, bool prev){
	
	if(stepRem == 0){
		return 0;
	}
	
	if(dp[currPos][leftRem]!=-1){
		return dp[currPos][leftRem];
	}
	
	int score1=0;
	
	if(currPos>0 && leftRem>0 && prev==false){
		score1 = arr[currPos-1] + solve(arr, leftRem-1, stepRem-1, currPos-1, true);
	}
	
	int score2=0;
	
	if(currPos<n-1){
		score2 = arr[currPos+1] + solve(arr, leftRem, stepRem-1, currPos+1, false); 
	}
	
	return dp[currPos][leftRem] = max(score1, score2);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	int k,z;
    	memset(dp,-1,sizeof(dp));
    	cin >> n >> k >> z;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		cout << arr[0] + solve(arr,z,k,0,false)<<endl;
		
	}
    
}

