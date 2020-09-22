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
		
		int table[numRowsFirst][numDenms];
		
		int colsFirstElements[numDenms];
		for(int j=0;j<numDenms;j++){
			colsFirstElements[j]= ceil(maxSum/denms[j]);
		}
		
		for(int i=0;i<numDenms;i++){
			for(int j=0;j<numRowsFirst;j++){
				table[i][j]=colsFirstElements[j] - (denms[j]*i);
			}
		}
		for(int i=0;i<numRowsFirst;i++){
			for(int j=0;j<numDenms;j++){
				cout<<table[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
		
		
		
		
		
		
		
		
	}
}
