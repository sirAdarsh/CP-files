#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		
	
	
	int r0,c0;
	cin>>r0>>c0;
	
	if(r0 != c0){
		
		
		//first move: move the bishop to the diagonal
		if( r0 > c0 ){
			while(r0 != c0){
			r0-=1;
			c0+=1;
		}
		}
		else{
			while(r0!=c0){
				r0+=1;
				c0-=1;
			}
		}
		
		
		cout<<21<<endl;
		cout<<r0<<" "<<c0<<endl;		
		cout<<1<<" "<<1<<endl;		
		cout<<2<<" "<<2<<endl;		
		cout<<1<<" "<<3<<endl;		
		cout<<3<<" "<<1<<endl;		
		cout<<4<<" "<<2<<endl;		
		cout<<5<<" "<<1<<endl;		
		cout<<1<<" "<<5<<endl;		
		cout<<2<<" "<<6<<endl;		
		cout<<1<<" "<<7<<endl;		
		cout<<7<<" "<<1<<endl;		
		cout<<8<<" "<<2<<endl;		
		cout<<2<<" "<<8<<endl;		
		cout<<3<<" "<<7<<endl;		
		cout<<4<<" "<<8<<endl;		
		cout<<8<<" "<<4<<endl;		
		cout<<7<<" "<<5<<endl;		
		cout<<8<<" "<<6<<endl;		
		cout<<6<<" "<<8<<endl;		
		cout<<7<<" "<<7<<endl;		
		cout<<8<<" "<<8<<endl;
		
		
	}
	else{
		cout<<20<<endl;
		cout<<1<<" "<<1<<endl;
		cout<<2<<" "<<2<<endl;
		cout<<1<<" "<<3<<endl;
		cout<<3<<" "<<1<<endl;
		cout<<4<<" "<<2<<endl;
		cout<<5<<" "<<1<<endl;		
		cout<<1<<" "<<5<<endl;		
		cout<<2<<" "<<6<<endl;		
		cout<<1<<" "<<7<<endl;		
		cout<<7<<" "<<1<<endl;		
		cout<<8<<" "<<2<<endl;		
		cout<<2<<" "<<8<<endl;		
		cout<<3<<" "<<7<<endl;		
		cout<<4<<" "<<8<<endl;	
		cout<<8<<" "<<4<<endl;		
		cout<<7<<" "<<5<<endl;		
		cout<<8<<" "<<6<<endl;		
		cout<<6<<" "<<8<<endl;		
		cout<<7<<" "<<7<<endl;		
		cout<<8<<" "<<8<<endl;		
		
	}
	
	}
	
}
