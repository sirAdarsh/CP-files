/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve( vector<int> &arr, int c ){
	
	auto it = arr.begin();
	
	for(int gap=0; gap<=100001; gap++){
		
		auto it = arr.begin();
		
		for(int j=0; j<c; j++){
			
			if(upper_bound(it, arr.end(), (*it)+gap)==arr.end()){
				return gap+2;
			}
			else{
				it = upper_bound(it, arr.end(), (*it)+gap );
			}
			
		}
		
	}
	
	return 0;
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n,c;
    	cin >> n >> c;
    	
    	vector<int> arr(n);
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
    	sort(arr.begin(), arr.end());
    	
    	cout << solve(arr, c)<<endl;
    	
	}
    
    
}

