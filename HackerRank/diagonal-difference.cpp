/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(vector<vector<int>> arr){
	
	int n = arr.size();

	int sumD1=0, sumD2=0;
	for(int i=0; i<n; i++){
		sumD1 += arr[i][i];
		sumD2 += arr[i][n-1-i];
	}
	cout << sumD1 <<" "<<sumD2<<endl;
	return abs(sumD1-sumD2);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<vector<int>> arr = { {11,2,4}, {4,5,6}, {10,8,-12} };
    cout << solve(arr)<<endl;
}

