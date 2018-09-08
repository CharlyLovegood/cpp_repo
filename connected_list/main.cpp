#include <iostream>

using namespace std;


class Node {
public:
    int data;
    Node * next;

    Node* create_new_node(int el) {
        Node* new_first = new Node;
        new_first->data = el;
        new_first->next = NULL;


        return new_first;
    }

    void add_element(int data) {
        Node* now = this;

        while (now->next != NULL) {
            now = now->next;
        }

        now->next = create_new_node(data);
        return;
    }


    void remove_element() {

        Node* now = this->next;

        data = now->data;
        next = now->next;

        delete now;
        return;
    }


    void print_element() {
        cout << data << ", ";
        if (next != NULL) {
            next->print_element();
        }
    }


};



int main() {

    int new_node_element;
    cin >> new_node_element;

    Node first;
    first.data = new_node_element;
    first.next = NULL;

    cin >> new_node_element;
    while (new_node_element != 0) {
        first.add_element(new_node_element);
        cin >> new_node_element;
    };

    first.remove_element();
    first.print_element();

    return 0;
}