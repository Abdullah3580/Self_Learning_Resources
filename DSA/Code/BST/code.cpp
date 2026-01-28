#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int v)
    {
        left = right = nullptr;
        data = v;
    }
};
node *root = nullptr;
void insertBst(node* &root,int d)
{
    if(root == nullptr)
    {
        node *newNode = new node(d);
        root = newNode;
        return;
    }

    if(d < root->data)
    {
        insertBst(root->left, d);
    }
    else
    {
        insertBst(root->right, d);
    }
}
void inorder(node *ruti)
{
    if(ruti == nullptr)
    {
        cout << "Tree is empty.........." << endl;
        return;
    }
    inorder(ruti -> left);
    cout << ruti->data <<" ";
    inorder(ruti -> right);


}
void mirror(node *root)
{
    if(root == nullptr) return;

    mirror(root -> left);
    mirror(root -> right);

    node *temp = root -> left;
    root -> left = root -> right;
    root -> right = temp;
}
int main()
{
    int ch =-1;


    while(ch)
    {
        cout << "Menu." << endl;
        cout << "0.Exit." << endl;
        cout << "1.Add node." << endl;
        cout << "2.Mirror" << endl;
        cout << "3.Print Tree." << endl;
        // cout << "" << endl;
        // cout << "" << endl;
        // cout << "" << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
            {
                cout <<"Number of node: ";
                int n;
                cin >> n;
                for(int i = 0; i< n; i++)
                {
                    cout << "Insert Node data: ";
                    int d;
                    cin >> d;
                    insertBst(root,d);
                }
                break;
            }
            case 2:
            {
                mirror(root);
                break;
            }
            case 3:
            {
                inorder(root);
                //cout << endl;
                break;
            }
        }

    }

};
