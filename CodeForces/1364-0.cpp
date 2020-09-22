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
    
    int t;
    cin >> t;
    while(t--){
    	int n, x;
    	cin >> n >> x;	
		int arr[n];
		int sum=0;
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		sum += arr[i];
		}
		
		if(sum%x){
			cout << n << endl;
		}
		else{
			
			int maxSeg=-1;
			
			for( int i=0; i<n; i++ ){
				if( arr[i]%x ){
					int mor = max( i, n-i-1 );
					maxSeg = max(maxSeg, mor);
				}
			}
			cout << maxSeg<<endl;
		}
    	
    	
    	
	}
    
}

