// Default constructor
// ForwardList();
// Copy Constructor
// ForwardList(const ForwardList& other);
// Destructor
// ~ForwardList();
// Push front element
// push_front(const T& data);
// Pop front element
// pop_front();
// Remove all values with the specific value
// remove (const T& value);
// Traverse and print all the elements
// void traverse() const;


#ifndef FORWARD_LIST_HPP
#define FORWARD_LIST_HPP

namespace CS270{
  template <class T>
  class forward_list{
    public:
       forward_list();
       ~forward_list();
       void push_front(const T& data);  
       void pop_front();
       int count_nodes();
       bool search(T value);
       Node<T>* get_front() const {
            return head_;
       }
    private:
      Node<T> *head_;
      int count_nodes_recursive(Node<T>* node);
      bool search_recursive(Node<T>*, T value);

  };

}
#include "linkedList.ipp"


#endif