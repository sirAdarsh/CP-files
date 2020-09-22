/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;


int solve(int a, int b, int c, int p, int q, int r){
	
	int dA = p-a;
	int dB = q-b;
	int dC = r-c;
	
	int mA=INT_MAX;
	if(a!=0){
		if(p%a==0){
			mA = p/a;
		}
	}
	
	int mB=INT_MAX;
	if(b!=0){
		if(q%b==0){
			mB = q/b;
		}	
	}
	
	int mC=INT_MAX;
	if(c!=0){
		if(r%c==0){
			mC = r/c;
		}
	}
	
	if( a==p && b == q && c == r ){
		return 0;
	}
	
//	cout <<dA<<" "<<dB<<" "<<dC<<endl;
	
	if( (dA==dB && dB==dC ) || ( mA==mB && mB==mC ) ){
		
		if(dA==dB && dB==dC){
			return 1;
		}
		if(mA==mB && mB==mC){
			if(mB!=INT_MAX){
				return 1;
			}
		}
		
	}
//	cout << "DWDW";
	// SINGLES
	
	if( dB == dC || dB == mC ){
		
		// p - (a+c) = dB
		if(a==p){
			return 1;
		}
		else{
			if(dA == dB || mA == dB ){
				return 1;
			}
			else{
				return 2;
			}
		}
	}
	if( mB == dC || mB == mC ){
		if(mB != INT_MAX){
			if(a==p){
				return 1;
			}
			else{
				if(dA==mB || mA==mB){
					return 1;
				}
				else{
					return 2;
				}
			}	
		}
		
	}
	
	if( dA == dC || dA == mC ){
		
		// p - (a+c) = dB
		if(b==q){
			return 1;
		}
		else{
			if(dB == dA || mB == dA ){
				return 1;
			}
			else{
				return 2;
			}
		}
	}
	if( mA == dC || mA == mC ){
		if(mA!=INT_MAX){
			if(p==q){
				return 1;
			}
			else{
				if(dB==mA || mB==mA){
					return 1;
				}
				else{
					return 2;
				}
			}
		}
		
	}
	
	
	if( dA == dB || dA == mB ){
//		cout <<"ds";
//		// p - (a+c) = dB
		if(c==r){
			return 1;
		}
		else{
			if(dC == dA || mC == dA ){
				return 1;
			}
			else{
				return 2;
			}
		}
	}
	if( mA == dB || mA == mB ){
		if(mA!=INT_MAX){
			if(c==r){
				return 1;
			}
			else{
				if(dC == dA || mC == dA){
					return 1;
				}
				else{
					return 2;
				}
			}
		}
		
	}
	
	// we are done with single block arithmets
	// ops on two blocks now
	
	// in A and B, check via dC, and mC
	
	
//	 TAKING	 dC
	int d;
	
	d = p - dC -a;
	if( q - (b+d) == dC ){
		return 2;
	}
	if((b+d)!=0){
		if( q % (b+d) == 0 ){
			if( q/(b+d) == dC ){
				return 2;
			}
		}
	}
	
	
	if( (a*dC)!=0 ){
		if( p % ( a*dC ) == 0 ){
		
			d = p/(a*dC);
			if( q - (b*d) == dC ){
				return 2;
			}
			if((b*d)!=0){
				if( q % (b*d) == 0 && (b*d)!=0 ){
				if( q/(b*d) == dC ){
					return 2;
				}
			}
			}
			
		}
	}
	
	
	//TAKING mC
	d = p - mC -a;
	if( q - (b+d) == mC ){
		return 2;
	}
	if((b+d)!=0){
		if( q % (b+d) == 0){
			if( q/(b+d) == mC ){
				return 2;
			}
		}
	}
	
	if( (a*mC)!=0 ){
		if( p % ( a*mC ) == 0 ){
		
			d = p/(a*mC);
			if( q - (b+d) == mC ){
				return 2;
			}
			if((b*d)!=0){
				if( q % (b*d) == 0 && (b*d)!=0 ){
				if( q/(b*d) == mC ){
					return 2;
				}
			}
			}
			
		}
	}
	
	
	
	
	
	
	// TAKING dA
	
	d = q - dA - b;
	if( r - (c+d) == dA ){
		return 2;
	}
	if((c+d)!=0){
		if( r % (c+d) == 0){
			if(r / (c+d) == dA){
				return 2;
			}
		}
	}
	
	
	if((c*dA)!=0){
		if( r % (c*dA) == 0 ){
		
		d = r/(c*dA);
		
		if( r-(c*d) == dA ){
			return 2;
		}	
		
		if((c*d)!=0){
			if( r%(c*d) == 0 && (c*d)!=0 ){
			if(r/(c*d)==dA){
				return 2;
			}
		}
		}
		
		
		}
	}
	
	
	// TAKING mA
	
	d = q - mA - b;
	if( r - (c+d) == mA ){
		return 2;
	}
	if((c+d)!=0){
		if( r % (c+d) == 0 ){
			if(r % (c+d) == mA){
				return 2;
			}
		}
	}
	
	if((c*mA)!=0){
		if( r % (c*mA) == 0 ){
		
			d = r/(c*mA);
			
			if( r-(c*d) == mA ){
				return 2;
			}	
			
			if((c*d)!=0){
				if( r%(c*d) == 0 && (c*d)!=0 ){
				if(r/(c*d)==mA){
					return 2;
				}
			}
			}
			
			
		}
	}
	
	
	
	
	// TAKING dB
	
	d = p - dB - a;
	if( r - (c+d) == dB ){
		return 2;
	}
	if((c+d)!=0){
		if( r%(c+d) ==0){
			if( r/(c+d) == dB ){
				return 2;
			}
		}
	}
	
	if((c*dB)!=0){
		if( r%(c*dB) == 0){
		d = r/(c*dB);
		
		if( r - (c*d) == dB ){
			return 2;
		}
		if((c*d)!=0){
			if(r%(c*d)==0 && (c*d)!=0 ){
			if(r/(c*d)==dB){
				return 2;
			}
		}
		}
		
		}
	}
	
	
	//TAKING mB
	
	d = p - mB - a;
	if( r - (c+d) == mB ){
		return 2;
	}
	if((c+d)!=0){
		if( r%(c+d) ==0){
			if( r/(c+d) == mB ){
				return 2;
			}
		}	
	}
	
	if((c*mB)!=0){
		if( r%(c*mB) == 0){
		d = r/(c*mB);
		
		if( r - (c*d) == mB ){
			return 2;
		}
		
		if((c*d)!=0){
			if(r%(c*d)==0){
			if(r/(c*d)==mB){
				return 2;
			}
		}
		}
		
	}
	}
	
	
	
	
	// ALL PAIRS OF TWO HAVE BEEN NOW CHECKED
	
	
	//CHECKING FOR TRIO
	return 3;
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int p,q,r,a,b,c;
    	cin >> a >> b >> c >> p >> q >> r;
    	cout <<solve(a,b,c,p,q,r)<<endl;
    	
	}
    
}

