#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int element){
        data=element;
        left=NULL;
        right=NULL;
    }
};



Node* insertBST(Node *root,int data){

    if(root==NULL)
      return new Node(data);

    if(data<root->data){
        root->left=insertBST(root->left,data);
    }else{
        root->right=insertBST(root->right,data);
    }

    return root;
}



Node* searchInBST(Node *root,int key){

     if(root==NULL)
        return NULL;

    if(root->data==key)
        return root;

    if(key<root->data)
        return searchInBST(root->left, key);

    return searchInBST(root->right, key);

}



// inorderSuccessor and deleteInBST both function is required for delete operation in BST

Node* inorderSuccessor(Node *root){
    Node *current = root;
    while(current && current->left!=NULL)
        current = current->left;
    return current;
}



Node* deleteInBST(Node* root,int key){

    if(key<root->data)
       root->left = deleteInBST(root->left, key);
    else if(key>root->data)
       root->right = deleteInBST(root->right, key);
    else{
        if(root->left==NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}



// These are the different types of traversing technique in Tree.

void inorder(Node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void preorder(Node *root){
    if(root==NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(Node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
     cout << root->data << " ";
}



int main(){

  Node *root=NULL;
  root=insertBST(root,5);
  insertBST(root,10);
  insertBST(root,3);
  insertBST(root,1);
  insertBST(root,20);

  if(searchInBST(root,1)==NULL)
        cout << "Key is not present" << endl;
  else
        cout << "Key is present" << endl;

  root = deleteInBST(root, 10);
  
  inorder(root);

  return 0;
}