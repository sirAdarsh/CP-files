/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

struct Node{
	int data;
	Node* left;
	Node *right;
};

Node* Delete(Node* root, int data){
	
	if(root=NULL){
		return root;
	}
	else if(data<root->data){
		Delete(root->left,data);
	}
	else{
		Delete(root->right, data);
	}
	
	if(root->data==data){
		
		if(root->left == NULL && root->right==NULL){
			delete root;
			root= NULL;
			return root;
		}
		
		else if( root->left == NULL ){
			Node *temp = root;
			root = root->temp;
			delete temp;
			return root;
		}
		
		else if(root->right==NULL){
			Node *temp=root;
			root= root->left;
			delete temp;
			return root;
		}
		
		else{
			
			struct Node* temp = FindMin(root->right);
			root->data = temp->data;
			root->
			
		}
		
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
}

