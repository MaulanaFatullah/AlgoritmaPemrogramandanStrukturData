#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;
};

Node* head = NULL; // pointer ke node pertama

void addNode(int data) {
  // buat node baru
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  // masukkan node baru ke linked list
  if (head == NULL) {
    head = newNode;
  } else {
    // cari node terakhir
    Node* curr = head;
    while (curr->next != NULL) {
      curr = curr->next;
    }

    // sambungkan node baru ke node terakhir
    curr->next = newNode;
  }
}

void printList() {
  // cetak semua node dalam linked list
  Node* curr = head;
  while (curr != NULL) {
    cout << curr->data << " ";
    curr = curr->next;
  }
  cout << endl;
}

int main() {
  // tambahkan beberapa node ke linked list
  addNode(1);
  addNode(2);
  addNode(3);

  // cetak linked list
  printList();

  return 0;
}
