#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *rote = nullptr;
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

void add(){
    cout << "Tree is empty,creating first node..." << endl;
    cout << "Enter Node Data." << endl;
    int value;
    if(rote == nullptr)
    {
        node *rote = new node();
        rote -> data = valuw
        printTree(rote);
    }

}
int main(){

    //node *rote = new node(50);
    int opt = -1;
    while(opt)
    {
        cout << "Menu." << endl;
        cout << "1.Add New Node." << endl;
        cout << "0.quite" << endl;

        cin >> opt;

        switch(opt){
            case 1:
            {
                add();
            }
        }
    }
}
