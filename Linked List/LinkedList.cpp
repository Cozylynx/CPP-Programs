#include <bits/stdc++.h>
using namespace std; 
class Node{   //declaring a new data type Node
    public:
    int data; // data and next are the object of the node data type which can be accessed by "." operator or "->" operator.
    Node* next; //declaring next pointer
    public:
    Node(int data1,Node* next1) // here Node is the constructor, Constructor is nothinng but 
                                // a member function which is used to initialise the objects like data and next pointer.
    { 
        data = data1; 
        next  = next1;  // Store the address of next node;
    }
};

int main(){
    vector<int> arr = {1,3,4,5,6};
    // Node y = Node(arr[0], nullptr); // here we use only Node that's why this is an object of struct
    // cout<<y.data;
    // cout<<y.next;
    Node* y = new Node(arr[0],nullptr);
    cout<<y->data; // prints the first value of the arr that is 1.
    return 0;
}