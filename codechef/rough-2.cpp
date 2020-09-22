#include<iostream>
#define ll long long
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		ll prod=1;
		int num=0;
		for(int i=1;i<=n;i++){
			prod=1;
			for(int j=i;j<=n;j++){
				
				prod *= arr[j];
				
				if(prod % 2 == 0 ){
					if(prod % 4==0){
						if(prod/4 !=1){
							num++;
						}
					}
					
					else{
						continue;
					}
				}
				else{
					num++;
				}
				
			}
			
		}
		cout<<num<<endl;
	}
	
}
