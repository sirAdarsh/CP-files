/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    	int A,B,C;
    	cin >> A >> B >> C;
    	
    	int MINabsDiff = INT_MAX;
    	vector<int> v(3);
    	
    	for(int a=1; a<=1e4*2; a++){
    		for(int b=a; b<=1e4*2; b+=a){
    			for(int c=b; c<=1e4*2; c+=b){
    				int absDiff = abs(A-a)+abs(B-b)+abs(C-c);
    				if(absDiff<MINabsDiff){
    					v[0]=a;
    					v[1]=b;
    					v[2]=c;
    					MINabsDiff=absDiff;
					}
				}
			}
		}
		
		cout << MINabsDiff << endl;
		for(int i:v){
			cout << i <<' ';
		}
		cout << endl;
    	
	}
    
    
    
}

