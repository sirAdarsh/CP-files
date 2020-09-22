#include<iostream>
using namespace std;
#define ll long long

ll fib[10000];
void initialize(){
	for(int i =0;i<10000;i++){
		fib[i] = -1;
	}
}

ll Fib(int n){
	
	if(fib[n]==-1){
		if(n<=1){
			fib[n] = n;
		}
		else{
			fib[n] = Fib(n-1) + Fib(n-2);
		}
	}
	return fib[n];
	
}



int main(void){
	
	int n;
	cin >> n;
	initialize();
	cout << Fib(n);
	
}


