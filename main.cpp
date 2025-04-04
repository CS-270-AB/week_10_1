#include <iostream>
#include "node.hpp"
#include "linkedList.hpp"
using namespace std;
using namespace CS270;
int main() { 

    forward_list<int> first_forward_list;
    first_forward_list.push_front(10);
    first_forward_list.push_front(20);    
    first_forward_list.push_front(30);
    first_forward_list.push_front(50);
    cout << "Search for the number 300" << endl;
    cout << first_forward_list.search(300) << endl;

    cout << "Count the number of nodes in the linked list" << endl;
    cout << first_forward_list.count_nodes() << endl;

    cout << "Print the elements from the linked list with fhe function pop" << endl;
    while (first_forward_list.get_front() != NULL){
        cout << first_forward_list.get_front() -> getData() << endl;
        first_forward_list.pop_front();
    }

    cout << "Print the number of nodes in the linked list" << endl;
    cout << first_forward_list.count_nodes() << endl;
    
    return 0;
}