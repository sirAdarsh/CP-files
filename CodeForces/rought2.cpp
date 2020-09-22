#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n>1){
			cout<<(n/2)<<endl;
		}
		else{
			cout<<(n)<<endl;
		}
		
		
		if(n<=3){
			
			cout<<n;
			for(int i=1;i<=n;i++){
				cout<<" "<<i;
			}
			cout<<endl;
		}
		
		else{
			
			if( n%2 ){
				
				int t = n/2;
				
				cout<<3<<" "<<1<<" "<<2<<" "<<3<<endl;
				int s = 4;
				for(int i=2;i<=t;i++){
					cout<<2<<" "<<s<<" "<<s+1<<endl;
					s+=2;
				}
			}
			
			else{
				
				int p = n-1;
				int t = p/2;
				
				cout<<3<<" "<<1<<" "<<2<<" "<<3<<endl;
				int s = 4;
				for(int i=2;i<=t;i++){
					cout<<2<<" "<<s<<" "<<s+1<<endl;
					s+=2;
				}
				cout<<1<<" "<<n<<endl;
				
			}
		}
		
	}
}
