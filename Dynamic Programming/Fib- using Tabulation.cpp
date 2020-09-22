#include<iostream>
using namespace std;
#define ll long long

ll Fib(int n){
	ll fib[10000];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i<=n ;i ++ ){
		fib[i] = fib[i-1] + fib[i-2];
	}
	return fib[n];
}



int main(){
	int n;
	cin >> n;
	cout << Fib(n) <<endl;
}

