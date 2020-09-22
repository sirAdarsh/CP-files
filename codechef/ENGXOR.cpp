#include<iostream>
#define l long
using namespace std;

//int readInt () {
//	bool minus = false;
//	int result = 0;
//	char ch;
//	ch = getchar();
//	while (true) {
//		if (ch == '-') break;
//		if (ch >= '0' && ch <= '9') break;
//		ch = getchar();
//	}
//	if (ch == '-') minus = true; else result = ch-'0';
//	while (true) {
//		ch = getchar();
//		if (ch < '0' || ch > '9') break;
//		result = result*10 + (ch - '0');
//	}
//	if (minus)
//		return -result;
//	else
//		return result;
//}

int even_ones(int x)
{
    x ^= x>>16;
    x ^= x>>8;
    x ^= x>>4;
    x ^= x>>2;
    x ^= x>>1;

    return !(x & 1);
}

int main(){
	
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--){
		
		int N,Q;
		cin>>N>>Q;
		
		int arr[N];
		for(l i=0;i<N;i++){
			cin>>arr[i];
		}
	
		int p;
		while(Q--){
			
		cin>>p;
		int evens=0;
		int n;
		
		for(int i=0;i<N;i++){
			n=p ^ arr[i];
			if(even_ones(n)==true){
				evens++;
			}
		}
		cout<<evens<<" "<<N-evens<<endl;
	}
		
	}
}
