/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define test cout<<"here"<<endl;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
	cin >> t;
	while(t--){
		int n,x,m;
		cin >> n >> x >> m;
		
		bool met=false;
		int min = INT_MAX, max = INT_MIN;
		
		while(m--){
			
			int l,r;
			cin >> l >> r;
			
			if(met){
				
				if( (r<=max && r>=min) || (l>=min && l<=max) || ( l<=min && r>=max ) ){
					if(l<min){
						min = l;
					}
					if(r>max){
						max = r;
					}
				}
				
			}
			else{
				if( x>=l && x<=r ){
					met = true;
				}
				if(met){
					if( x>=l && x<=r ){
						if(l<min){
							min = l;
						}
						if(r>max){
							max = r;
						}
					}
				}
				
			}
		}
		if(met){
			cout << max-min+1<<endl;
		}
		else{
			cout << 0 <<endl;
		}
		
	}    
    
}

