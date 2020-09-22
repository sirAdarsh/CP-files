#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> A= {11,2,3,14};
	
	sort(A.begin(),A.end()); 
	
	bool present =binary_search(A.begin(),A.end(),11);
	
//	cout<<" 11 "<<present<<endl;
	
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
	// A = {11,2,3,14,100,100,100,123}
	
	
	//ITERATING IN VECTOR
	
//	for(auto it=A.begin();it!=A.end();it++){
//		cout<<*it<<" ";
//	}
	
	//ANOTHER ITERATING METHOD
//	for(auto value : A){
//		cout<<value<<" ";
//	}

	auto it=lower_bound(A.begin(),A.end(),100);
	auto it2=upper_bound(A.begin(),A.end(),100);
	
//	cout<< *it <<" "<< *(it2) <<endl;
	
	
	//Sorting array in reverse order
	sort(A.begin(),A.end(),greater<int>() );
	
//	auto it3;
//	for(it=A.begin();it!=A.end();it++){
//		cout<<*it<<" ";
//	}

	
	for(int &x : A){
		x++;
		cout<< x <<" ";
		x++;
	}



	
}
