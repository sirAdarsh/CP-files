#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	scanf("%d",&tc);
	
	while(tc--){
		
		int N,Q;
		scanf("%d %d",&N,&Q);
		
		int arrN[N+1];
		
		for(int i=1;i<=N;i++){
			scanf("%d",&arrN[i]);
		}
		
		int arrXY[N+1][100001]={};
		
		for(int j=1;j<=100000;j++){
			for(int i=1;i<=N;i++){
				
				if(j==1){
					if(arrN[i] == j ){
						arrXY[i][j]=1;
						continue;
					}
				}
				
				else{
					if( (arrN[i]>j && arrN[i-1]<j) ||(arrN[i]<j && arrN[i-1]>j)  ){
						arrXY[i][j]=1;
						continue;
					}
					else if(arrN[i] == j ){
						arrXY[i][j]=1;
						continue;
					}
				}
			}
		}
		
//		printf("%d",arrXY[3][5]);
		
		while(Q--){
			
			int x1,x2,y;
			scanf("%d %d %d",&x1,&x2,&y);
			int sum=0;
			
//			printf("%d %d %d",x1,x2,y);
//			for(int i=x1;i<=x2;i++){
//				sum=sum+arrXY[i][y];
//			}
//			printf("%d\n",sum);
//			cout<<arrXY[4][4];
		
			for(int i=1;i<=4;i++){
				cout<<arrXY[i][4]<<endl;
			}

		}
		
		
		
	}
	
}
