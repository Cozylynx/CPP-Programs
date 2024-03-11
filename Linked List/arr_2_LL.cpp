#include <bits/stdc++.h>
using namespace std; 
class Node{   
    public:
    int data; 
    Node* next; 
    public:
    Node(int data1,Node* next1) 
    { 
        data = data1; 
        next  = next1;  
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
 Node* ConvertArray2LL(vector<int> &arr){
        Node* head = new Node(arr[0]);  // make a new pointer head which stores the address of the first index.
        Node* mover = head; // a mover which helps in linking the LL.
        for(int i =0;i<arr.size();i++){
            Node* temp = new Node (arr[i]); //creates a temporary new node which will have the value of the arr at ith index.
            mover->next = temp; // giving the address of next node to the mover at ith index.
            mover = temp;  // moving the mover to the next  position.
        }
        return head;
    }

int main(){
   
    vector<int> arr = {2,5,8,7};
    Node* head = ConvertArray2LL(arr);  // it will return the head which is 2; and the arr is converted now.    
    cout<<head->data;
   
}