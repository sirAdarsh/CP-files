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
    
    int a,b,c;
    cin>>a>>b>>c;
    
		bool e =true;
		int n=-1;
		for(int i=c; i<b; i++){
			if(b%i==0 && b/c>1){
				e=false;
				n=i;
				break;
			}
		}
		if(e){
			cout<< 0;
		}
		else{
			
			int turns = a;
			if(a%2){
				cout<< 1;
			}
			else{
				cout<< 0;
			}
			
		}
		
	
    
}

