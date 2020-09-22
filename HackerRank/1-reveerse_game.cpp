#include<bits/stdc++.h>
#define ll long long
using namespace std;



int solve(int n, int k){
	
	int i=0, f=n-1;
	
	int arr[100000]={};
	
	for(int p=0; p<n; p++){
		
		if(p%2==0){
			arr[f] = p;
			f--;
		}
		else{
			arr[i] = p;
			i++;
		}
	}
	
//	for(i=0; i<n; i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
	
	return arr[k];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	
    	int n,k;
    	cin >> n >> k;
    	printf("%d\n",solve(n,k));
    	
	}
}

