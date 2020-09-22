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
    	int n,x;
    	cin >> n >> x;
    	int ar[n];
    	int o=0,e=0;
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		if(ar[i]&1){
    			o++;
			}
			else{
				e++;
			}
		}
		
		if(!o){
			cout<<"No"<<endl;
		}
		else{
			x--;
			o--;
			x = x-(o/2)*2;
			
			if(x<0){
				int m = abs(x);
				if(m&1){
					m++;
				}
				x += m;
			}
			
			x -= e;
			if(x>0){
				cout <<"No"<<endl;
			}
			else{
				cout <<"Yes" << endl;
			}
		}
		
	}
}

