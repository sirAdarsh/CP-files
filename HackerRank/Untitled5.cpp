#include<bits/stdc++.h>
using namespace std;

int n;

int sum( int S, int arr[], int t){
	
	int K[t+1][S+1];
	
	for(int i=0; i<=t; i++){
		
		for(int j=0; j<=S; j++){
			
			if(i==0 || j==0){
				K[i][j] = 0;
			}
			else if( arr[i-1] <= j){
				K[i][j] = max(K[i-1][j], arr[i-1]+K[i-1][j-arr[i-1]]);
			}else{
				K[i][j] = K[i-1][j];
			}
		}
	}
	
	int sumF= K[t][S];
	
	vector<int> sols;
	int p =S;
	
	for(int i=t; i>0; i--){
		
		if( K[i][S] == K[i-1][S] ){
			continue;
		}else{
			sols.push_back(arr[i-1]);
			S -= arr[i-1];
		}
		
	}
	int s = sols.size();
	for(int i=s-1; i>=0; i--){
		cout<<sols[i]<<" ";
	}
	
	return K[t][p];
}


int main(){
	while(cin>>n){
	int t;
	cin>> t;
	int arr[t];
	for(int i=0;i<t;i++){
			cin >> arr[i];
		}
		cout<<"sum:"<<sum(n,arr,t)<<endl;
	}	
}
