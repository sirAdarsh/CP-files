#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> q){
	while(!q.empty()){
		cout<<'\t'<<q.front();
		q.pop();
	}
	cout<<endl;
}
int main(){
	queue<int> qu;
	qu.push(200);
	qu.push(210);
	qu.push(321);
	showq(qu);
}

