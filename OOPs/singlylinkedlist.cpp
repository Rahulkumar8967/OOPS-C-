#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

class LinkedList {
public:
  Node* head;

  LinkedList() {
    head = nullptr;
  }

  void insertAtBeginning(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
  }

  void insertAtEnd(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
      head = newNode;
      return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }

    temp->next = newNode;
  }

  void printList() {
    Node* temp = head;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << endl;
  }
};

int main() {
  LinkedList list;

  list.insertAtBeginning(1);
  list.insertAtBeginning(2);
  list.insertAtEnd(3);

  list.printList();

  return 0;
}