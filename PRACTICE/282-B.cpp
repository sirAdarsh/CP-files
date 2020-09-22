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
    
    int n;
    cin >> n;
    
    int a,g;
    
    int sumG=0, sumA=0;
    
    n--;
    cin >> a >> g;
    if(sumA+a-sumG<500){
    	sumA+=a;
    	cout<<'A';
	}
	else{
		sumG+=g;
		cout<<'G';
	}
		
	
    
    while(n--){
    	cin >> a >> g;
    	if(sumA+a-sumG<500){
    		sumA+=a;
    		cout<<'A';
		}
		else{
			sumG+=g;
			cout<<'G';
		}
	}
    
}

