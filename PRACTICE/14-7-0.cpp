/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int ar[n];
    	int sm=0;
    	int one=-1;
    	
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		if(i%2==0)
    		sm += ar[i];
    		else
    		sm -= ar[i];
		}
		if(sm==0){
			cout << n << endl;
			for(int i=0; i<n; i++){
				cout << ar[i] << ' ';
			}
		}
		else{
			
			if(sm<0){
				
				cout << n-abs(sm) << endl;
			
				int cnt=0;
				int idl = abs(sm);
				
				for(int i=0; i<n; i++){
					
					if(cnt!=idl){
						if(ar[i]==1 && i%2){
							cnt++;
						}
						else{
							cout << ar[i] << ' ';
						}
					}
					else{
						cout << ar[i] << ' ' ;
					}
					
				}
				
				
			}
			else{
				
				cout << n-abs(sm) << endl;
			
				int cnt=0;
				int idl = abs(sm);
				
				for(int i=0; i<n; i++){
					
					if(cnt!=idl){
						if(ar[i]==1 && i%2==0){
							cnt++;
						}
						else{
							cout << ar[i] << ' ';
						}
					}
					else{
						cout << ar[i] << ' ' ;
					}
					
				}
				
			}
			
			
		}
		cout << endl;
	}
    
}

