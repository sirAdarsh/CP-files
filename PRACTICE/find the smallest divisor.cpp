/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int check(vector<float> &nums, int mid){
	
	int sum=0;
	for(auto i : nums){
		int d = ceil( i/mid );
		sum+=d;
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<float> nums={2,3,5,7,11};
    int threshold = 11;
    
    int lo = 1, hi = 1000000, mid;
    
    int ans=INT_MAX;
    
    while(lo <= hi){
    	mid = lo+(hi-lo)/2;
    	if(check(nums, mid) <= threshold ){
    		ans = min(mid,ans);
    		hi=mid-1;
		}
    	else{
    		lo=mid+1;
		}
	}
    cout << ans << endl;
}

