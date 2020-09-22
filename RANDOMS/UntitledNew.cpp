#include<iostream>
#include<algorithm>

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
		
		int a=0;
		for(int i=0;i<4;i++){
			if(table[0][i] > a){
				a=table[0][i];
			}
		}
		int b=0;
		for(int i=0;i<4;i++){
			if(table[1][i] > b){
				b=table[1][i];
			}
		}
		int c=0;
		for(int i=0;i<4;i++){
			if(table[2][i] > c){
				c=table[2][i];
			}
		}	
		int d=0;
		for(int i=0;i<4;i++){
			if(table[3][i] > d){
				d=table[3][i];
			}
		}	
		
		int ans[4];
		ans[0]=a;
		ans[1]=b;
		ans[2]=c;
	    ans[3]=d;
	    
	    sort(ans,ans+4);
	    
	    ans[0]=ans[0] *25;
		ans[1]=ans[1] *50;
		ans[2]=ans[2] *75;
		ans[3]=ans[3] *100;
		
		
		int sum=0;
		
		for(int i=0;i<4;i++){
			if(ans[i] != 0){
				sum=sum+ans[i];
			}
			else{
				sum=sum-100;
			}
		}
		totalSum=totalSum+sum;
		cout<<sum<<endl;
}

cout<<totalSum<<endl;
		
		
		
				
	}
	
	
	
	
	
	
	
