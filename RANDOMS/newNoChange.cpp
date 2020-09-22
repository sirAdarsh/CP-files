#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc-->0){

		long numDenms, maxSum;
		cin>>numDenms>>maxSum;

		long denms[5];

		for(int i=0;i<numDenms;i++){
			cin>>denms[i];
		}

		int checker[]={};
		
		int i= ceil(maxSum/denms[i]);
		int j=ceil(maxSum/denms[j]);
		int k=ceil(maxSum/denms[k]);
		int l=ceil(maxSum/denms[l]);
		int m=ceil(maxSum/denms[m]);
		
		int sum;
		
		int lmnop[5]={};
		int testMaxSum=maxSum;
		
		switch(numDenms){
			
			case 5:
			{
			 for(int a=0;a<=i;a++){
			for(int b=0;b<=j;b++){
				for(int c=0;c<=k;c++){
					for(int d=0;d<=l;d++){
						for(int e=0;e<=m;l++){
							cout<<a<<" ";
							sum= (i*denms[0])+(j*denms[1])+(k*denms[2])+(l*denms[3])+(m*denms[4]);
							lmnop[0]=i;
							lmnop[1]=j;
							lmnop[2]=k;
							lmnop[3]=l;
							lmnop[4]=m;
							if(sum>maxSum){
								for(int z=0;z<5;z++){
									if(lmnop[z] != 0){
										maxSum=maxSum - (1*denms[z]);
									}
								}
								if(maxSum<testMaxSum){
									for(int f=0;f<numDenms;f++){
										cout<<lmnop[f];
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	case 4: 
		}
		
		
		


	}
}

