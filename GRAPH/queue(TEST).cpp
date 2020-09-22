#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> qu;
	qu.push(2);
	qu.push(31);
	cout<<qu.front()<<endl;
	
	qu.pop();
	cout<<qu.size()<<endl;
	cout<<qu.front()<<endl;
	qu.pop();
	cout<<qu.size()<<endl;
}
