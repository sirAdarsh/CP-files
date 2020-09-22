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
			if(arr[i]%2==0){
				if(arr[i]%4==0){
					arr[i]=2;
				}else{
					arr[i]=1;
				}
			}
			else{
				arr[i]=0;
			}
		}
		
		ll sum=0;
		ll size=0;
		
		for(int i=1;i<=n;i++){
//			cout<<i<<" ";
			
			size=0;
			
			if( arr[i] == 0 ){
				bool zero=false;
				for(int j = i;j <= n ;j++){
					
					if( arr[j] == 2 ){
						//full
						zero=true;
						sum += (n - i + 1);
						i=(j-1);
						break;
						
					}
					
					else if(arr[j] == 1 ){
						//stop
						zero=true;
						i = (j-1);
						sum += size * (size + 1) / 2;
//						cout<<"brek"<<" "<<i<<" ";
						break;
					}
					
					size++;
					
				}
				if(zero==false){
					sum += size;
				}
					
			}
			
			else if ( arr[i] == 1 ){
//				cout<<"a"<<i;//OK
				for(int j = i+1; j<=n ; j++){
					
					if(arr[j] != 0){
						//stop
						
						ll x = (j-1-1);
						sum += x * (x+1)/2;
						
						i = (j-1);
						sum += (n-j+1);
						break;
					}
					
				}
			}
			else if ( arr[i] == 2 ){
				
				sum += ( n - i + 1);
				
			}
			
		}
		cout<<sum<<endl;
		
	}
}
