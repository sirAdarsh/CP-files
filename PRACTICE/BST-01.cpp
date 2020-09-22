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

struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data){
	
	BstNode* newNode = new BstNode();
	newNode->data=data;
	newNode->left=NULL = newNode->right=NULL;
	return newNode;	
}

BstNode Insert(BstNode* root, int data){
	
	if(root=NULL){
		root = GetNewNode(data);
	}
	
	else if( data<= root->data ){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right, data);
	}
	
	return root;
	
}

bool Search(BstNode* root, int data){
	if(root==NULL){
		return false;
	}
	else if(root->data==data){
		return true;
	}
	else if(data<=root->data){
		return Search(root->left,data);
	}
	else{
		return Search(root->right,data);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    BstNode* root;
	root = NULL;
	
	Insert(root,15);
	
    
}

