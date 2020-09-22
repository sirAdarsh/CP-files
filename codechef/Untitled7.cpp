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
		
		//if count is even, 
		while(1){
			if(N<=M){
				cout<<"A"<<endl;
				break;
			}
			if(N-M-1-a > M ){
				a=a+M;
				count++;
			}
			cout<<count;
//			else{
//				if(count%2!=0){
//					cout<<"B"<<endl;
//					break;
//				}
//				else{
//					cout<<"A"<<endl;
//					break;
//				}
//			}
		}
		
		
	}
}
