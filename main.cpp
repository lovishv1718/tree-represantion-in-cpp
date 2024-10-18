#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node*createnode(int data){
    struct node*newnode=new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int main(){
    struct node*root=createnode(1);
    struct node*first=createnode(2);
    struct node*second=createnode(3);
    root->left=first;
    root->right=second;

}