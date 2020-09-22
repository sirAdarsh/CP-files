#include<bits/stdc++.h>
#define q queue<string>
#define p push
using namespace std;
void printQueue(queue<string> qu){
	while(!qu.empty()){
		cout<<qu.front()<<endl;
		qu.pop();
	}
}
int main(){
	int n;
	cin >> n;
	string a,b;
	q rat;
	q womenChild;
	q men;
	q captain;
	while(n--){
		cin >> a >> b;
		if(b == "rat"){
			rat.p(a);
		}else if(b == "woman"|| b=="child"){
			womenChild.p(a);
		}else if(b == "man"){
			men.p(a);
		}else if(b == "captain"){
			captain.p(a);
		}
	}
	
	printQueue(rat);
	printQueue(womenChild);
	printQueue(men);
	printQueue(captain);
	
}



