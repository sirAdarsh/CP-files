#include<bits/stdc++.h>
using namespace std;

void showPQ(priority_queue<int> q){
	while(!q.empty()){
		cout<<"\t"<<q.top();
		q.pop();
	}
}

int main(){
	priority_queue<int> pq;
	pq.push(10);
	pq.push(30);
	pq.push(20);
	pq.push(2);
	pq.push(5);
	
	
	cout<<"The priority queue is ";
	showPQ(pq);
}
