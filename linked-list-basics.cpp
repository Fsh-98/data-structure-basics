// C++ implementation of singly linked list

// basic structure
#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

// printing the singly linked list
void print_list(){
    struct node *ptr = head;
    
    // iterate through the list and print the nodes
    while(ptr != NULL){
        cout << ptr-> data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

// inserting data at the begining of the singly linked list
void insert_first(int data){
    struct node *new_node = new struct node;
    // insert data to the new node
    new_node -> data = data;
    
    // change the old head
    new_node->next = head;
    
    // update the new head
    head = new_node;
    
    cout << endl;
}

// deleting data at the begining of the singly linked list
void delete_first(){
    // save the head on a temp node
    struct node *temp = head;
    
    // change the to new head
	head = head -> next;
	
	//free memory by  deleting temp node
	temp = NULL;
	delete temp;
	
	cout << endl;
    
}


