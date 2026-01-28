#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int data){
        this -> data = data;
        left = nullptr;
        right = nullptr;
    }
};

node *root

void printTree(node *rote)
{
    if(rote == nullptr) return;

    cout << rote -> data <<" ";

    if(rote -> left != nullptr)
    {
        printTree(rote->left);
    }

    if(rote -> right != nullptr)
    {
        printTree(rote->right);
    }
}

int input(){
    int x ;
    cin >> x;
    return x;
}

void addNode(node *rote){
    if(rote == nullptr)
    {
        node *newNode = new node();
    }
}
int main(){

    cout << "Total node: ";
    int n;
    cin >> n;
    cout << "Insert Head data: " ;
    int h;
    cin >> h;
    node *rote = new node(x);


    node *rote = new node(50);
    node *node1 = new node(1);
    node *node2 = new node(2);
    node *node3 = new node(3);
    node *node4 = new node(4);
    node *node5 = new node(5);
    node *node6 = new node(6);
    node *node7 = new node(7);
    node *node8 = new node(8);
    node *node9 = new node(9);
    node *node10 = new node(10);
    node *node11 = new node(11);
    node *node12 = new node(12);
    node *node13 = new node(13);
    node *node14 = new node(14);

    rote -> left = node1;
    node1 -> left = node3;
    node3 -> left = node7;
    node3 -> right = node8;
    node1 -> right = node4;
    node4 -> left = node9;
    node4 -> right = node10;
    
    rote -> right = node2;
    node2 -> left = node5;
    node5 -> left = node11;
    node5-> right = node12;
    node2 -> right = node6;
    node6 -> left = node13;
    node6 -> right = node14;
    

    
    printTree(rote);

}