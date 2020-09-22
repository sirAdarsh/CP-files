#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	scanf("%d",&tc);
	
	while(tc--){
		
		int N,Q;
		scanf("%d %d",&N,&Q);
		
		int arrN[N+1]={};
		
		for(int i=1;i<=N;i++){
			scanf("%d",&arrN[i]);
		}
		
		while(Q--){
			
			int x1,x2,y;
			scanf("%d %d %d",&x1,&x2,&y);
			int sum=0;
			
			short int arrXY[(N+1)]={};
			
			for(int i=x1;i<=x2;i++){
				if(i==1){
					if(arrN[i] == y ){
						arrXY[i]=1;
						continue;
					}
				}
				
				else{
					if( (arrN[i]>y && arrN[i-1]<y) ||(arrN[i]<y && arrN[i-1]>y)  ){
						arrXY[i]=1;
						continue;
					}
					else if(arrN[i] == y ){
						arrXY[i]=1;
						continue;
					}
				}
			}
			
//			for(int i=x1;i<=x2;i++){
//				sum=sum+arrXY[i];
//			}
//			printf("%d\n",sum);
		for(int i=1;i<=N;i++){
			cout<<arrXY[i]<<endl;
		}

		}
	}
}
