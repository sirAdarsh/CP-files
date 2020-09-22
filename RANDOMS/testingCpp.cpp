#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
	string yourName;
	cout<<"what is your name?"<<endl;
	getline(cin,yourName);
	string wholeName=yourName.assign(yourName);
	cout<<wholeName<<endl;
	string firstName=wholeName.assign(wholeName,0,6);
	cout<<firstName<<endl;
	cout<<"index for last name : "<<yourName.find("sinha",0);
	
	return 0;
}
