#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
    	cin >> arr[i];
	}
	
	ll bea[n+1];
	for(int i=1; i<=n; i++){
		bea[i] = arr[i];
	}
	
	for(int i=1; i<=n; i++){
		
		for(int j=i+1; j<=n; j++){
			
			if( (arr[j] - arr[i] == j - i) &&  arr[j] > arr[i] ){
				bea[j] += arr[i];
			}
			
		}
		
	}
	ll max = 0;
	for(int i=1; i<=n; i++){
		cout<<" "<<bea[i]<<endl;
		if(bea[i] > max){
			max = bea[i];
		}
	}
	cout<<max<<endl;
    
}

