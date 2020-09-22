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
	
	
	if( a==p && b==q && c!=r ){
		return 1;
	}
	if( a!=p && b==1 && c==r ){
		return 1;
	}
	if( a==p && b!=r && c==r ){
		return 1;
	}
	
	
	
	if( dA==dB && dB==dC ){
		return 1;
	}
	if( mA==mB && mB==mC && mC!= INT_MAX ){
		return 1;
	}
	
	
	
	
	
	if( dA==dB ){
		if(dB==dC || dA==0){
			return 1;
		}
		else{
			return 2;
		}
	}
	if( dB==dC ){
		if(dC==dA || dA==0 ){
			return 1;
		}
		else{
			return 2;
		}
	}
	if( dC==dA ){
		if(dA==dB || dB==0){
			return 1;
		}
		else{
			return 2;
		}
	}
	if(mA!=INT_MAX && mA==mB){
		if(mB==mC || mC==1 ){
			return 1;
		}
		else{
			return 2;
		}
	}
	if( mB!=INT_MAX && mB==mC){
		if( mB==mA || mA==1 ){
			return 1;
		}
		else{
			return 2;
		}
	}
	if(mC!=INT_MAX && mC==mA){
		if(mB==mA || mC==1){
			return 1;
		}
		else{
			return 2;
		}
	}
	
	
	
	// we are done with single block arithmets
	// ops on two blocks now
	
	// in A and B, check via dC, and mC
	
	
	
	
	
	
	//   FOR ------ F -----==
	
	// case 1: taking all 3
	// taking p-ad = q-bd
	
	float d,f;
	
	if((b-c)!=0){
		d = (q-r)/(b-c);
		f = q - (b*d);
		
		if( (int)d == d ){
			if((mA==f) || (dA==f)){
				return 2;
			}
			else{
				float temp;
				temp = p-(a*d);
				if(temp==f){
					return 2;
				}
				
				if((a*d)!=0){
					temp = p/(a*d);
					if(temp==f && (int)temp==temp ){
						return 2;
					}	
				}
				
			}
		}
	}
	
	
	
	
	
	
	if( (a-c)!=0 ){
		d = (p-r)/(a-c);
		f = p - (a*d);
		if((int)d==d ){
			if( (mB==f)||(dB==f)){
				return 2;
			}
			else{
				
				float temp;
				temp = q-(b*d);
				if(temp==f){
					return 2;
				}
				if((b*d)!=0){
					temp = q/(b*d);
					if(temp==f && (int)temp==temp){
						return 2;
					}
				}
				
			}
		}
	}
	
	
	
	
	
	
	if( (a-b)!=0 ){
		d = (p-q)/(a-b);
		f = q - (b*d);
		if( (int)d == d  ){
			if((mC==f) || (dC==f)){
				return 2;
			}
			else{
				
				float temp;
				temp = r-(c*d);
				if(temp==f){
					return 2;
				}
				if((c*d)!=0){
					temp = r/(c*d);
					if(temp==f && (int)temp==temp ){
						return 2;
					}
				}
				
			}
		}
	}
	
	
	
	
	
	
	// FOR ------S-------
	
	if( (b-q)!=0 ){
		d = (((q*c)-(b*r))/(b-q));
		if( (b+d)!=0 && (c+d)!=0 ){
			f = q/(b+d);
		
			if( (int)f==f && (int)d==d){
				if((mA==f)||(dA==f)){
					return 2;
				}
				else{
					
					float temp;
					temp = p-(a*d);
					if(temp==f){
						return 2;
					}
					if((a*d)!=0){
						temp = p/(a*d);
						if(temp==f && (int)temp==temp ){
							return 2;
						}
					}
					
					
				}
			}
		}
		
	}
	
	
	
	if( (p-r)!=0 ){
		
		d = (((r*a)-(p*c))/(p-r));
		
		if( (a+d)!=0 && (c+d)!=0 ){
			f = p/(a+d);
		
			if( (int)d==d && (int)f==f ){
				if((mB==f) || (dB==f)){
					return 2;
				}
				else{
					float temp;
					temp = (q-(b*d));
					if(temp==f){
						return 2;
					}
					temp = (q/(b*d));
					if(temp==f && (int)temp==temp ){
						return 2;
					}
				}
			}
		}
		
	}
	
	
	
	
	
	if((p-q)!=0){
		d = (((q*a)-(p*b))/(p-q));
		if((a+d)!=0 && (b+d)!=0){
			f = p/(a+d);
			if( (int)d==d && (int)f==f ){
				if( (mC==f) || (dC==f) ){
					return 2;
				}
				else{
					float temp;
					temp = ( r - (c*d) );
					if(temp==f){
						return 2;
					}
					if((c*d)!=0){
						temp = r/(c*d);
						if(temp==f && (int)temp==temp){
							return 2;
						}
					}
					
				}
			}
		}
		
	}
	
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

