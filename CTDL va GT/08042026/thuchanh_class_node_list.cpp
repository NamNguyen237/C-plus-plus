#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value; //gia tri cua node
        Node *next; //con tro den node tiep theo

        Node (int value) {
            this -> value = value; //gan gia tri cho node
            next = nullptr; //gan con tro next bang nullptr
        }
        
};

class LinkedList {
    private:
        Node *head; //dau list
        Node *tail; //cuoi list
        int length;
    public:
        LinkedList(int value) { //ham tao
            Node *newNode = new Node(value); //cap phat bo nho cho node
            head = newNode; //gan head bang node vua tao
            tail = newNode; //gan tail bang node vua tao
            length = 1; //gan length bang 1
            //chay xong cai nay se dc list co length = 1 gom 1 node
            //dong vai tro ca head ca tail
        }
        void Them(int value) {
            Node *newNode = new Node(value);
            tail -> next = newNode;
            tail = newNode;
            length++;
        }

        ~LinkedList() { //ham huy
            Node *temp = head;
            while (head) {
                head = head -> next;
                delete temp;
                temp = head;
            }
        }
        void PrintList() {
            Node *temp = head;
            while (temp != nullptr) {
                cout << temp -> value << endl;
                temp = temp -> next;
            }
        }
};

int main()
{
    LinkedList *myList = new LinkedList(5); //tao mot danh sach lien ket, luc nay value = 5
    myList -> PrintList(); //in danh sach lien ket
    myList -> Them(10); //them 10 vao danh sach
    myList -> PrintList(); //in danh sach lien ket
    delete myList; //xoa bo nho cap phat cho list
    return 0;
}