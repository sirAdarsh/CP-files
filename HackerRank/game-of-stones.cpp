#include<iostream>
using namespace std;
string solve(int n){
	
	if(n%7<=6 && n%7>=2){
		return "First";
	}
	return "Second";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout<<solve(n)<<endl;
	}
}
