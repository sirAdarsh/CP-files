#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll nCr(int n, int r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    return p;
} 

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int N,Q;
		cin>>N;
		
		ll arr[N+1];
		for(int i=1;i<N+1;i++){
			cin>>arr[i];
		}
		cin>>Q;
		while(Q--){
			int L,R;
			cin>>L>>R;
			bool even=true;
			
			if((R-L+1)%2){
				even=false;
			}
			
			unordered_map<ll,int> map;
			
			if(L==R){
				cout<<"1"<<endl;
				continue;
			}
			
			for(int i=L;i<=R;i++){
				map[arr[i]]++;
			}
			
			ll size=map.size();
			
			if(map.size()==1){
				cout<<"1"<<endl;
				continue;
			}
			
			if(even){
				
				if(size==(R-L+1)){
					cout<<"0"<<endl;
					continue;
				}
				
				else{
					ll ans=0,num;
					for(auto i:map){
						if(i.second >=2 ){
							num=i.second;
							ll it=2;
							while(it<=num){
//								ans=ans+nCr(num,it);
								it+=2;
							}
							ans=ans+nCr(num,it);
							
						}
					}
					cout<<(ans%998244353)<<endl;
					continue;
					
				}
				
			}
			
			else{
				
				if(size==(R-L+1)){
					cout<<size<<endl;
				}
				else{
					cout<<"HEllo";
					ll ans=(R-L+1),num;
					for(auto i:map){
						if(i.second >=3 ){
							num=i.second;
							int it=3;
							while(it<=num){
								it+=2;
							}
							it-=2;
							ans=ans+nCr(num,it);
						}
					}
					cout<<(ans%998244353)<<endl;
				continue;
				
				}
			}
			
		}
	}
}
