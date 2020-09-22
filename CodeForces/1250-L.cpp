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

int a,b,c;


bool isOk(int mid){
	
	int A,B,C;
	A=B=C=mid;
	
	A-=a;
	B-=b;
	C-=c;
	
	if(A<0 && B<0 && C<0){
		return false;
	}
	bool containA=false;
//	cout << "A = " << A << ' '<< "B = " << B << ' '<< "C = " << C << endl;
	if(A<0){
		
		B = min(mid,B+max(0,C));
		
		B -= (-1*A);
		
		if(B<0){
			return false;
		}
		else{
			A =0;
		}
		containA=true;
		
	}
	if(C<0){
		if(containA)return false;
		B =  min(mid, B+max(0,A));
		
		B-=(-1*C);
		
		if(B<0){
			return false;
		}
		else{
			C =0;
		}
	}
	
	if(B<0){
		if( max(0,A)+max(0,C)>=(-1*B) ){
			return true;
		}
		return false;
	}
	return true;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
//    cin >> a >> b >> c;
//    cout << isOk(399);
    
    while(t--){
    	cin >> a >> b >> c;
    	int ans = INT_MAX;
    	
    	int l=1, r=1000, mid;
    	
    	while(l<=r){
    		
    		mid = (l+r)/2;
    		
    		if(isOk(mid)){
    			ans=min(ans,mid);
    			r--;
			}
			else{
				l++;
			}
    		
		}
    	cout << ans << endl;
	}
}

