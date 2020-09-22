/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(int a, int b, int c, int p, int q, int r){
	
	for(int i=-10; i<=10; i++){
		
		
		int ta = a+i;
		int tda = (p-ta);
		//search for tda in b and c
		if( (tda==db || tda == mb) && (tda==dc || tda == mc) ){
			return 2;
		}
		
		ta = (a*i);
		
		if( (a*i)!=0 ){
			if( p%(a*i) == 0 ){
				int tma = p/(a*i);
				if( ( (tma==db) || tma==mb) && (tma==dc || tma==mc) ){
					return 2;
				}
			}
		}
		
		
		
		int tb = b+i;
		int tdb = (q-tb);
		
		if((tdb==da || tdb==ma) && (tdb==dc || tdb==mc)){
			return 2;
		}
		
		tb = (b*i);
		
		if((b*i)!=0){
			if(q%(b*i)==0){
				int tmb = q/(b*i);
				if((tmb==da || tmb==ma) && (tmb==dc || tmb==mc)){
					return 2;
				}
			}
		}
		
		
		
		
		
		int tc = c+i;
		int tdc = (r-tc);
		
		if((tdc==da || tdc==ma) && (tdc==db || tdc==mb)){
			return 2;
		}
		
		tc = (c*i);
		
		if((c*i)!=0){
			if(r%(c*i)==0){
				int tmc = r/(c*i);
				if((tmc==da || tmc==ma) && (tmc==db || tmc==mb)){
					return 2;
				}
			}
		}
		
		
		
		
		
		
		
		
		
		int tda2=(a+i);
		
		
		
		
		
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    
}

