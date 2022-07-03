// https://www.programiz.com/dsa/linked-list-operations
#include <iostream>

using namespace std;

struct node{
  int data;
  struct node *next;
};

struct node *head = NULL;

struct node *temp = head;

while(temp != NULL)
{
    cout << temp->data << endl;
    temp = temp->next;
}

struct node *newNode;
newNode = malloc(sizeof(struct node));

// inserting at the beginning
number = 4;
newNode->data = number;
newNode->next = head;
head = newNode;

// inserting at the end
number = 4;
newNode->data = number;
newNode->next = NULL;

struct node *temp = head;

while(temp->next != NULL)
{
    temp = temp->next;
}
temp->next = newNode;

// insert at the middle
number = 4;
newNode->data = number;

struct node *temp = head;
i = 2
pos = 3
while(i<pos)
{
    if(temp->next != NULL)
    {
        temp = temp->next;
    }
    i++;
}

newNode->next = temp->next;
temp->next = newNode;

// delete at the begining

head = head->next;

// deleting at the end

struct node *temp = head;
while(temp->next != NULL)
{
    temp = temp->next;
}
temp = NULL;

// deleting at the middle
struct node *temp = head;

pos = 2
i = 2
while(i < pos)
{
    if(temp->next != NULL)
    {
        temp = temp->next;
    }
    i++;
}
temp->next = temp->next->next;
