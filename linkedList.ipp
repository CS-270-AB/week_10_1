#include "linkedList.hpp"
#include <cstdlib>
namespace CS270{

    template <typename T>
    forward_list<T>::forward_list(){
        head_ = NULL;
    }
    
    template <typename T>
    forward_list<T>::~forward_list(){
        while (head_ != NULL){
            pop_front();
        }
    }

    template<typename T>
    void forward_list<T>::push_front(const T& value) {
        head_ = new Node<T>(value, head_);
    }

    template<typename T>
    void forward_list<T>::pop_front() {
    if (head_ == NULL) {
        std::cout << "List is empty, nothing to pop." << std::endl;
        return;
    }
    
        Node<T>* temp = head_;      
        head_ = get_front()->getNext();   
        delete temp;               
    }

    template<typename T>
    int forward_list<T>::count_nodes(){
        // TO DO
    }
    
    template<typename T>
    bool forward_list<T>::search(T value){
        // TO DO
    }

    template<typename T>
    int forward_list<T>::count_nodes_recursive(Node<T>* node){
        // TO DO  

    }
    
    template<typename T>
    bool forward_list<T>::search_recursive(Node<T>* node, T value){
        // TO DO
    }

}