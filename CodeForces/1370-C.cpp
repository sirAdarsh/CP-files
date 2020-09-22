/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
int check(int n){
	for(int i=3; i<=sqrt(n)+1; i+=2){
		if(n%i==0){
			return i;
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n;
    	cin >> n;
    	
    	bool ch=0;  //0->hm haar rhe,c1--> hm jeet rhe
    	
    	while( n>1 ){
    		
    		if(n==2){
    			ch^=1;
    			break;
			}
			
    		if(n%2){
    			ch^=1;
    			break;
			}
    		int tt=check(n);
    		if(tt == -1) {
    			break;
			}
			else{
				n/=tt;
				ch^=1;
			}
    		
		}
		if(ch){
			cout<<"Ashishgup"<<endl;
		}
		else{
			cout<<"FastestFinger"<<endl;
		}
    	
	}
    
}

