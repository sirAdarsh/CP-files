 #include<iostream>
 using namespace std;
 
 void fun(int n);
 int main(){
 	int x=3;
 	fun(x);
 }
 void fun(int x){
 	if(x>0){
 		cout<<x<<endl;
 		fun(x-1);
	 }
 }
