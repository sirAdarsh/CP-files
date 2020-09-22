//program to unset the last set bit
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	// n-1 means all bits including the last set bit gets toggled
	cout<<bitset<8>(n)<<endl;
	cout<<bitset<8>(n-1)<<endl;
	cout<<bitset<8>(n & (n-1))<<endl;
}
