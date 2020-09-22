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

int fn(int i, int &A, int &B, int &C){
	int tmp=0;
	for(int j=i; j<=7; j++){
			if(j==1 || j==4 || j==7){
				if(A==0){
					break;
				}
				A--;
				tmp++;
			}		
			else if(j==2 || j==6){
				if(B==0){
					break;
				}
				B--;
				tmp++;
			}	
			else{
				if(C==0){
					break;
				}
				C--;
				tmp++;
			}	
		}
		return tmp;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,c;
    cin >> a >> b >> c;
    int ans=0;
    for(int i=1; i<=7; i++){
    	int tmp=0;
    	int A,B,C;
    	A=a;B=b;C=c;
    	tmp += fn(i,A,B,C);
    	int mnA,mnB,mnC;
    	mnA = A/3;
    	mnB = B/2;
    	mnC = C/2;
    	int addn= min(mnA,min(mnB,mnC));
    	tmp += (7*addn);
    	A -= (3*addn);
    	B -= (2*addn);
    	C -= (2*addn);
    	tmp += fn(1,A,B,C);
    	ans=max(ans,tmp);
	}
    cout << ans << endl;
}

