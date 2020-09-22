#include<iostream>
using namespace std;

int knapsack(int W,int val[],int wt[],int n){
	
	
	int K[n+1][W+1];
	
	for(int i=0; i<=n; i++){
		
		for(int w=0; w<=W; w++){
			
			if(w==0 || i==0){
				K[i][w]=0;
			}
			else if(wt[i-1] <= w){
				K[i][w] = max( val[i-1]+K[i-1][w-wt[i-1]], K[i-1][w] );
			}
			else{
				K[i][w] = K[i-1][w];
			}
		}	
	}
	return K[n][W];
	
}


int main(){
	int val[]={10,20,30};
	int wt[]={1,1,1};
	int W = 2;
	int n = 1;
	cout<<knapsack(W,val,wt,n);
}
