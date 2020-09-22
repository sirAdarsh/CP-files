#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int totalSum=0;
	while(t--){
		int nums;
		cin>>nums;
		
		int table[4][4];
		
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
			table[i][0]=arrFor12[i];
		}
		for(int i=0;i<4;i++){
			table[i][1]=arrFor3[i];
		}
		for(int i=0;i<4;i++){
			table[i][2]=arrFor6[i];
		}
		for(int i=0;i<4;i++){
			table[i][3]=arrFor9[i];
		}
		
		for(int i=0;i<4;i++){
			cout<<arrFor12[i];
		}
		
		int arrFinalFor12[4];
		int arrFinalFor3[4];
		int arrFinalFor6[4];
		int arrFinalFor9[4];
		//copying of arrays
		for(int i=0;i<4;i++){
			arrFinalFor12[i]=arrFor12[i];
		}
		for(int i=0;i<4;i++){
			arrFinalFor3[i]=arrFor3[i];
		}
		for(int i=0;i<4;i++){
			arrFinalFor6[i]=arrFor6[i];
		}
		for(int i=0;i<4;i++){
			arrFinalFor9[i]=arrFor9[i];
		}
		
		sort(arrFinalFor12,arrFinalFor12 + 4);
		sort(arrFinalFor3,arrFinalFor3 + 4);
		sort(arrFinalFor6,arrFinalFor6 + 4);
		sort(arrFinalFor9,arrFinalFor9 + 4);
		
		int a=arrFinalFor12[3];
		cout<<a<<endl;
	    
	    
		
}

		
		
		
				
	}
	
	
	
	
	
	
	
