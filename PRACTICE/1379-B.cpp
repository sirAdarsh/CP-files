/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int l,r,m;
    	cin >> l >> r >> m;
    	
    	int remL=0;
    	int remM=abs(l-r);
    	int rem;
    	for(rem = remL; rem<=remM; rem++){
    		
    		int num = m-rem;
    		if(num%l==0){
    			break;
			}
		}
		
		if(rem==m){
			
			for(rem=-1*remM; rem<=remL; rem--){
				int num = m-rem;
				if(num%l==0){
					break;
				}
			}
			
		}
		
    	int a,b,c;
    	a = l;
    	cout << rem << endl;
    	if(rem>0){
    		b = r;
    		c = b-abs(rem);
		}
		else{
			c = r;
			b = c-abs(rem);
		}
    	cout << a <<" "<<b <<" "<<c <<endl;
    	
	}
    
}

