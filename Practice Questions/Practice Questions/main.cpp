// remove duplicate from sorted linked list
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*head;
void createLL(int arr[],int n){
    Node *head = new Node;
    Node * temp , *last;
    head->data = arr[0];
    head->next = NULL;
    last = head;
    for(int i = 1; i < n; i++){
        temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;
    
    }
}
int main(){
    int arr[6] = {10,20,20,30,30,30};
    int n = 6;
    createLL(arr,n);
}
