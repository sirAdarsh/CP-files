#include<iostream>
using namespace std;

int knapsack(int W, int val[], int wt[], int N){
	
	int K[N+1][W+1];
	for(int i=0 ;i<=N; i++){
		
		for(int w=0; w<=W; w++){
			
			if(i==0 || w==0){
				K[i][w]=0;
			}
			else if(wt[i-1]<=w){
				K[i][w] = max( val[i-1]+K[i-1][w-wt[i-1]], K[i-1][w]);
			}
			else{
				K[i][w] = K[i-1][w];
			}
		}
	}	
	return K[N][W];
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int S,N;
		cin >> S >> N;
		int val[N];
		int wt[N];
		for(int i=0;i<N;i++){
			cin>>wt[i];
			cin>>val[i];
		}
		
		cout<<knapsack(S,val,wt,N);
		
	}
}
