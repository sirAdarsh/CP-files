#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n+1];
    	for(int i=1; i<=n; i++){
    		cin >> arr[i];
		}
		
		int lis[n+1];
		for(int i=1; i<=n; i++){
			lis[i] = 1;
		}
		
		for(int i=2; i<=n; i++){
			if(arr[i] > arr[1]){
				lis[i]=2;
			}
		}
		
		for(int i=2; i<n; i++){
			for(int j=2; i*j<=n; j++){
				if(arr[i*j] > arr[i]){
					lis[i*j] = max(lis[i*j], lis[i] +1 );
				}	
			}
		}
		int max=0;
		for(int i=1; i<=n; i++){
			cout<<" "<<lis[i]<<endl;
			if(lis[i]>max){
				max=lis[i];
			}
		}
		cout<<max<<endl;
		
	}
    
    
}

