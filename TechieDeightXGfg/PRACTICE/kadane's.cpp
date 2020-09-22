/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int arr[]){
	int n=9;
	int max_sum=INT_MIN;
	int sum_here=0;
	
	for(int i=0; i<n; i++){
		
		sum_here+=arr[i];
		
		if(sum_here>max_sum){
			max_sum=sum_here;
		}
		
		if(sum_here<0){
			sum_here=0;
		}
		
	}
	
	return max_sum;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    cout << solve(arr);
}

