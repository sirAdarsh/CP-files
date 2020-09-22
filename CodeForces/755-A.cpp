#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==1 || n==2 ){
		cout<<n<<endl;
	}
	else{
		int arr[1001];
		int p =1;
		for(int i=3;i<=1000;i++){
			arr[i] = p;
			p++;
		}
		cout<<arr[n]<<endl;
	}
	
	
}
