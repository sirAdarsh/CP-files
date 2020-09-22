/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	int MAX = (1<<n) - 1;
	
	int ans = 0;
	
	for(int mask=3; mask<=MAX; mask++){
		
		int sum=0;
		
		int easiest = INT_MAX, hardest = 0;
		
		for( int i=0; i<n; i++){
			int k = 1<<i;
			
			if( (mask&k) != 0 ){
				sum += arr[i];
				if(arr[i]<easiest){
					easiest = arr[i];
				}
				if(arr[i]>hardest){
					hardest = arr[i];
				}
			}
		}
		if( sum >=l && sum <= r  && (hardest - easiest >= x) ){
			ans ++;
		}
	}
    cout << ans<<endl;
}

