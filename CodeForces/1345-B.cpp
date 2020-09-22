#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		if( n < 2 ){
			cout<<0<<endl;
		}
		else{
			int c = 1;
		
		int count = 1;
		
		while(true){
			
			int br = ( c * 2 + (c - 1) );
//			cout<<n<<endl;
			if ( n >= br ){
				
				n -= br;
				c++;
			} 
			
			else if ( n < br ){
				
				c = 1;
				count++;
			}
			
			if( n < 2 ){
				break;
			}
//			cout<<n<<endl;
		}
		cout<<count<<endl;
	}
		}
		
		
	
}
