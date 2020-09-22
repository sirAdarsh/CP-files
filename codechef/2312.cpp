#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		long long N,M;
		cin>>N>>M;
		long long a=0;
		long long count=0;
		long long sum=0;
		//if count is even, 
		while(1){
			if(N<=M){
				cout<<"A"<<endl;
				break;
			}
//			if(N-M-1-a > M ){
//				a=a+M;
//				count++;
//			}
//			
////			else{
////				cout<<count<<endl;
////				break;
////			}
			
			if(sum<N-M-1){
				
				sum=sum+M;
				count++;
				
			}


			if(sum >= N-M-1){
				if(count%2!=0){
					cout<<"A"<<endl;
					break;
				}
				else{
					cout<<"B"<<endl;
					break;
				}
			}
		}
		
		
	}
}
