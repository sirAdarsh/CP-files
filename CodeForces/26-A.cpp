#include<iostream>
using namespace std;

int solve( int n){
	
	if(n<=5){
		return 0;
	}
	
	int ans = 0;
	
	for(int i = 6; i <= n ; i++){
		
		int c =0;
		int h = i;
		
		for(int j = 2; j*j <= h ; j++){
			
			if( h%j == 0 ){
				
				while(h%j==0){
					h/=j;
				}
				c++;
			}
		}
		
		if(h!=1){
			c++;
		}
		
		if(c==2){
			ans++;
		}
		
	}
	return ans;
}



int main(){
	
	int n;
	cin >> n;
	cout << solve(n)<<endl;
}

