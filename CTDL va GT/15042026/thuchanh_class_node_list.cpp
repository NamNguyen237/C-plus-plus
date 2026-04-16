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
        Node *head;
        Node *tail;
        int length;
    public:
        //ham tao
        LinkedList(int value) {
            Node *newNode = new Node(value); //cap phat bo nho cho node
            head = newNode; //gan head bang node vua tao
            tail = newNode; //gan tail bang node vua tao
            length = 1; //gan length bang 1
            //chay xong cai nay se dc list co length = 1 gom 1 node
            //dong vai tro ca head ca tail
        }
        LinkedList(int value1, int value2) { 
            Node *newNode1 = new Node(value1);
            Node *newNode2 = new Node(value2);
            head = newNode1;
            tail = newNode2;
            head -> next = tail;
            length = 2;
        }
        void ThemCuoiDS(int value) {
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
                cout << temp -> value << "->";
                temp = temp -> next;
            }
            cout << "NULL";
        }


        //them dau danh sach
        void ThemDauDS(int value) {
            Node *newNode = new Node(value);
            newNode -> next = head;
            head = newNode;
            length++;
        }
        //in phan tu dau
        void InPTDau() {
            if (head != nullptr) cout << head -> value << "->";
            else cout << "NULL";
        }
        //in phan tu cuoi
        void InPTCuoi() {
            if (tail != nullptr) cout << tail -> value << "->";
            else cout << "NULL";
        }
};

int main()
{
    LinkedList *myList = new LinkedList(5, 6); //tao mot danh sach lien ket, luc nay value = 5
    myList -> PrintList();
    cout << endl;
    myList -> ThemDauDS(4);
    myList -> PrintList();
    cout << endl;
    myList -> InPTDau();
    cout << endl;
    myList -> InPTCuoi();
    delete myList; //xoa bo nho cap phat cho list
    return 0;
}