// I will explain you step by step if have any doubt mention the line no. and part where you didn't understood
#include <bits/stdc++.h>
using namespace std;

// Let's create a node data type using struct as it also behaves as class just its public by default and class is private
struct node{
    int data; // first we create data it can be of any type and a single node can also store multpile data
    node* next; // this is the pointer which will point to next node or will not point to anything(NULL).
    // Let's make a constructor as we studied in previous class
    node(int d){
        data = d;
        next = nullptr;
    }
};

//lets create a linked list data structure now
class linkedlist{
    node* head = nullptr; // we made head pointer to identify where will the linked list start we will keep this private
public:
    // Let's make a add function for insertion in linkedlist
    void add(int val){
        node* newnode = new node(val);  // Here we created the newnode dynamically as we do in C using malloc
        if(!head){ // then here we checked if there is no node in linked list we will make this head point to newnode and then exit
            head = newnode;
            return;
        }
        node* temp = head; // else  we will travel the linked list till the temp's next become null and we will insert there
        while(temp->next) temp = temp->next;
        temp->next = newnode;
    }
    // let's make a function to display this as well
    void display(){
        node* temp = head; // Till this temp becomes null we basically go over each node print its data and go to next
        while(temp){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
    
    void reverse(){ // function to reverse the linked list we will se this later i just made it to practice
        node* prev = nullptr;
        node* current = head;
        node* next = nullptr;
        while (current) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
    void sort(){ // Bubble sort algo for sorting we can also do quick sort but that will be tedious
        if (!head || !head->next) return; // if empty or single element list

        bool swapped;
        node* ptr1;
        node* lptr = nullptr;

        do {
            swapped = false;
            ptr1 = head;

            while (ptr1->next != lptr) {
                if (ptr1->data > ptr1->next->data) {
                    swap(ptr1->data, ptr1->next->data);
                    swapped = true;
                }
                ptr1 = ptr1->next;
            }
            lptr = ptr1;
        } while (swapped);
    }
};
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    linkedlist obj;
    obj.add(5);
    obj.add(2);
    obj.add(3);
    obj.display();
    return 0;
}


/* 
    It's useful as in linkedlist we dont have to allocate memory before hand and we can increase and store the 
    information on the go so it enhances the memory management as in array we have to allocate some space before
    hand but here it creates it dynamically. So yaa it's effecient thats why it's used to save resources.
*/