/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int gcd(int a, int b){
	return b?(gcd(b,a%b)):a;
}

int findSum(int n, int base){
	
	int sum = 0;
	
	while( true ){
		int p;
		p = n%base;
		n/=base;
		sum += p;
		if(n==0){
			break;
		} 
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    int sum=0;
    
    for(int i=2; i<n; i++){
    	sum += (findSum(n,i));
	}
	
	n-=2;
	
	int g = gcd(sum,n);
	sum /= g;
	n /= g;
	
    cout << sum<<"/"<< n << endl;
}

