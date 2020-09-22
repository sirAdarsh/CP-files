//program to find the position of the rightmost set bit
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	cout<<bitset<8>(n)<<endl;
	int p=-(n-1);
	cout<<bitset<8>( -(n-1) )<<endl;
	cout<<bitset<8>(n&p)<<endl;
	
}

