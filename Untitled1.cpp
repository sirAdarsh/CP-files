#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){

		int numDenms, maxSum;
		cin>>numDenms>>maxSum;

		int denms[numDenms];

		for(int i=0;i<numDenms;i++){
			cin>>denms[i];
		}

		//making a two dimensional array

		sort(denms,denms+numDenms);

		int numRowsFirst= (maxSum/denms[0])+2 ;

		int table[numRowsFirst][numDenms]={};

		int colsFirstElements[numDenms];
		for(int j=0;j<numDenms;j++){
			colsFirstElements[j]= ceil((float)maxSum/denms[j]) * denms[j] ;
		}

//		for(int i=0;i<numDenms;i++)
//		cout<<colsFirstElements[i]<<" ";

		int tempVal=0;
		for(int i=0; i<numDenms; i++){
			for(int j=0; j<numRowsFirst; j++){
				tempVal=colsFirstElements[i] - (denms[i] * j);
				if(tempVal>=0){
					table[i][j] = tempVal;
				}
				else{
					table[i][j]=0;
				}
				
				
			}
			
		}
		for(int i=0; i<numRowsFirst; i++){
			for(int j=0; j<numDenms; j++){
				
				cout<<table[j][i]<<" ";				
			}
			cout<<endl;
		}

		
		int arrNumsAdd[numsDenms];
		int temp;
		int j;
		for(int i=0; i<numDenms; i++){
			temp=0;
			j=0;
			
			while(table[]){
				
			}
			
			arrNumsAdd[i]=
			
			
		}
	







	}
}

