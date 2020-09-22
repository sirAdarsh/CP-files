#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M;
        
		cin>>N>>M;
        
        int F[N]={},P[N]={},sum[M+1]={};
        
		int Ans=2147483647;
        
		for(int i=0;i<N;i++){
            cin>>F[i];
        }
        
		for(int i=0;i<N;i++){
            cin>>P[i];
        }
        
//        for(int i=0;i<N;i++){
//        	cout<<F[i]<<" ";
//		}
//		cout<<endl;
//		for(int i=0;i<N;i++){
//        	cout<<P[i]<<" ";
//		}
        
		for(int i=0;i<N;i++){
        	sum[F[i]]=P[i]+sum[F[i]];
        	
            }
            for(int i=0;i<N;i++){
            	if(sum[F[i]]<Ans){
            		Ans=sum[F[i]];
				}
			}
    
    
//	for(int i=1;i<=M;i++){
//         if(sum[i]<Ans && sum[i]!=0)
//         Ans=sum[i];
//     }
//   
        cout<<Ans<<endl;
    
}
}

