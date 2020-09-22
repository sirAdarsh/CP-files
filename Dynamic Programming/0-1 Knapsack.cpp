#include<iostream>
using namespace std;

int knapsack(int W, int wt[], int val[], int n){
	
	int i,w;
	int K[n+1][W+1];
	
	for(i=0 ; i<=n ; i++){
		
		for(w =0 ; w<=W ; w++){
			
			if(i==0 || w==0){
				K[i][w] = 0;
			}
			else if( wt[i-1] <= W){
				
				K[i][w] = max( K[i-1][w], val[i-1]+K[i-1][w-wt[i-1]] );			
			}
			else{
				K[i][w] = K[i-1][w];
			}
		}
	}
	return K[n][W];
}

int main(){
	int wt[]={1,1,1};
	int val[]={10,20,30};
	int W = 2;
	int n = 3;
	cout<<knapsack(W,wt,val,n);
}


