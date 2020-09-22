#include<iostream>
#include<time.h>
using namespace std;

int minDeletions(string s, int l, int r){
	
	if( l>=r ){
		return 0;
	}
	
	if( s[l] == s[r] ){
		return minDeletions(s, l+1, r-1);
	}
	
	return 1 + min( minDeletions(s,l+1,r), minDeletions(s,l,r-1) );
	
}

int main(){
	
	clock_t tStart = clock();
	
	string s;
	s = "ISFURHFWIHEFOIWENFNKwefwewewe";
	int n = s.length();
	
	cout<<"Minimum deletions required =\t";
	cout << minDeletions(s,0,n-1);	
	cout<<"\n\n\n\nTime taken = "<<(double)(clock()-tStart)/CLOCKS_PER_SEC;
}
