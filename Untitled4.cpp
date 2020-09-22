#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int totalSum=0;
	while(t--){
		int nums;
		cin>>nums;
		
		int t[4][4];
		
		char arrShows[nums];
		int arrTimes[nums];
		
		for(int i=0; i< nums; i++){
			cin>>arrShows[i];
			cin>>arrTimes[i];
		}
		int arrFor12[4]={};
		int arrFor3[4]={};
		int arrFor6[4]={};
		int arrFor9[4]={};
		
		for(int i=0; i<nums; i++){
			if(arrShows[i]=='A'){
				if(arrTimes[i]==12){
					arrFor12[0]=arrFor12[0]+1;
				}
				else if(arrTimes[i]==3){
					arrFor3[0]=arrFor3[0]+1;
				}
				else if(arrTimes[i]==6){
					arrFor6[0]=arrFor6[0]+1;
				}
				else if(arrTimes[i]==9){
					arrFor9[0]=arrFor9[0]+1;
				}
			}
			else if(arrShows[i]=='B'){
				if(arrTimes[i]==12){
					arrFor12[1]=arrFor12[1]+1;
				}
				else if(arrTimes[i]==3){
					arrFor3[1]=arrFor3[1]+1;
				}
				else if(arrTimes[i]==6){
					arrFor6[1]=arrFor6[1]+1;
				}
				else if(arrTimes[i]==9){
					arrFor9[1]=arrFor9[1]+1;
				}
			}
			else if(arrShows[i]=='C'){
				if(arrTimes[i]==12){
					arrFor12[2]=arrFor12[2]+1;
				}
				else if(arrTimes[i]==3){
					arrFor3[2]=arrFor3[2]+1;
				}
				else if(arrTimes[i]==6){
					arrFor6[2]=arrFor6[2]+1;
				}
				else if(arrTimes[i]==9){
					arrFor9[2]=arrFor9[2]+1;
				}
			}
			else if(arrShows[i]=='D'){
				if(arrTimes[i]==12){
					arrFor12[3]=arrFor12[3]+1;
				}
				else if(arrTimes[i]==3){
					arrFor3[3]=arrFor3[3]+1;
				}
				else if(arrTimes[i]==6){
					arrFor6[3]=arrFor6[3]+1;
				}
				else if(arrTimes[i]==9){
					arrFor9[3]=arrFor9[3]+1;
				}
			}
		}
		for(int i=0;i<4;i++){
			t[i][0]=arrFor12[i];
		}
		for(int i=0;i<4;i++){
			t[i][1]=arrFor3[i];
		}
		for(int i=0;i<4;i++){
			t[i][2]=arrFor6[i];
		}
		for(int i=0;i<4;i++){
			t[i][3]=arrFor9[i];
		}
		
		int sumTemp=0;
		int sum=0;
		
		int ansSum[4];
		
		int zeroes=0;
		
		ansSum={t[0][0],t[1][1],t[2][2],t[3][3]};
		sort(ansSum,ansSum+4);
		sumTemp=(100*ansSum[0])+(75*ansSum[1])+(50*ansSum[2])+(25*ansSum[3]);
		if(sumTemp>sum){
			
			// number of zeroes in the set
			for(int i=0;i<4;i++){
				if(ansSum[i]==0){
					zeroes=zeroes+1;
				}
			}
			sum=sumTemp - (100*zeroes);
		}
		
		cout<<sum;
//		
//	    t[0][0] + t[1][1] + t[2][2] + t[3][3]
//	    t[0][0] + t[1][1] + t[3][2] + t[2][3]
//	    
//	    t[0][0] + t[2][1] + t[1][2] + t[3][3]
//	    t[0][0] + t[2][1] + t[3][2] + t[1][3]
//	    
//	    t[0][0] + t[3][1] + t[1][2] + t[2][3]
//	    t[0][0] + t[3][1] + t[2][2] + t[1][3]
//	    
//	    t[1][0] + t[0][1] + t[2][2] + t[3][3]
//	    t[1][0] + t[0][1] + t[3][2] + t[2][3]
//	    
//	    t[1][0]  t[2][1] t[0][2] t[3][3]
//t[1][0] t[2][1] t[3][2] t[0][3] 
//                                
//t[1][0] t[3][1] t[0][2] t[2][3] 
//t[1][0] t[3][1] t[2][2] t[0][3] 
//                                
//t[2][0] t[0][1] t[1][2] t[3][3] 
//t[2][0] t[0][1] t[3][2] t[1][2] 
//                                
//t[2][0] t[1][1] t[0][2] t[3][3] 
//t[2][0] t[1][1] t[3][2] t[0][3] 
//                                
//t[2][0] t[3][1] t[0][2] t[1][3] 
//t[2][0] t[3][1] t[1][2] t[0][3] 
//                                
//t[3][0] t[0][1] t[1][2] t[2][3] 
//t[3][0] t[0][1] t[2][2] t[1][3] 
//                                
//t[3][0] t[1][1] t[0][1] t[2][3] 
//t[3][0] t[1][1] t[2][2] t[0][3] 
//                                
//t[3][0] t[2][1] t[0][2] t[1][3] 
//t[3][0] t[2][1] t[1][2] t[0][3] 
		
		
		
		
	    
		
}

		
		
		
				
	}
	
	
	
	
	
	
	
