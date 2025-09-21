#include <bits/stdc++.h>

using namespace std;
struct Node{
    int info;
    Node *next;
    Node(): info(0),next(nullptr){}
    Node(int data):info(data),next(nullptr){} 
};
void traverse(Node *head)
{
    if(head == nullptr){
        cout<<"Empty List";
        return;
    }
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp -> info <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void insertBeg(Node *&head, int info)
{
    Node *newNode=new Node(info);
    newNode ->next=head;
    head= newNode;
}
void insertLast(Node *&head, int info)
{
    Node *newNode=new Node(info); //new node banane ka tarika
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node *temp=head; //temporay node banane ka tarika
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp ->next=newNode;
}
Node *search(Node *&head, int data)
{
    Node *temp = head;
    while(temp != nullptr){
        if(temp->info==data)
        return temp;
        temp = temp->next;
    }
    return nullptr; 
}
void insertAfter(Node *&head, int data, int info)
{
    Node *temp = search(head,data);
    if(temp == nullptr){
        cout<<data<<" not found"<<endl;
        return;
    }
    Node *newNode = new Node(info);
    newNode -> next = temp->next;
    temp -> next = newNode;
}

void removeBeg(Node *&head)
{
}
void removeLast(Node *&head)
{
}
void removeAfter(Node *&head, Node *current)
{
}

int main()
{
    //LinkedList list;
    Node *head =nullptr;
    int ch, info;
    do
    {
        cout << "1.........Add Begining" << endl
             << "2.........Add Last" << endl
             << "3.........Add After" << endl
             << "4.........Remove Begining" << endl
             << "5.........Remove Last" << endl
             << "6.........Remove After" << endl
             << "7.........Search" << endl
             << "8.........Show" << endl
             << "9.........Exit" << endl
             << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter info: ";
            cin >> info;
            insertBeg(head,info);
            break;
        case 2:
            cout << "Enter info: ";
            cin>> info;
            break;
        case 3:
            cout<<"unimplemented"<<endl;
            break;
        case 4:
            cout<<"unimplemented"<<endl;
            break;
        case 5:
            cout<<"unimplemented"<<endl;
            break;
        case 6:
            cout<<"unimplemented"<<endl;
            break;
        case 7:
            cout<<"unimplemented"<<endl;
            break;    
        case 8:

            break;
        case 9:
            cout << "See you later" << endl;
            break;
        default:
            cout << "Not defined yet" << endl;
        }
    } while (ch != 9);
}