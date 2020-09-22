/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

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
    
    int n, xi, yi, xf, yf;
    cin >> n >> xi >> yi >> xf >> yf;
    
    cin >> s;
    
    int dispY = yf-yi;
    int dispX = xf-xi;
    
    int E=0,W=0,N=0,S=0;
    
    if(dispY>0){
    	N=dispY;
	}
	else{
		S=abs(dispY);
	}
	if(dispX>0){
		E=dispX;
	}
	else{
		W=abs(dispX);
	}
    
    int nMax=0;
    int sMax=0;
    int eMax=0;
    int wMax=0;
	
    
    for(int i=0; i<n; i++){
    	
    	if(s[i]=='S'){
			sMax++;
		}
		elif(s[i]=='N'){
			nMax++;
		}
		elif(s[i]=='E'){
			eMax++;
		}
		else{
			wMax++;
		}
    	
    	
    	if( sMax>=S && nMax>=N && eMax>=E && wMax>=W ){
    		cout << i+1 << endl;
    		return 0;
		}
	}
    cout << -1 << endl;
    
}

