#include<iostream>
#define l long
using namespace std;

int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int even_ones(l x)
{
    x ^= x>>16;
    x ^= x>>8;
    x ^= x>>4;
    x ^= x>>2;
    x ^= x>>1;

    return !(x & 1);
}

int main(){
	
	int t;
    t=readInt();
	while(t--){
	   
	int p;
	cin>>p;
	for(int i=1;i<=500;i++){
		cout<<(p^i)<<" ";
	}
		
	}
}

