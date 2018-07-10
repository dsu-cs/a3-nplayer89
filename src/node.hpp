#pragma once
#include <cstddef>
template<class T>
class Node{
    private:
        T data;
        Node<T> *left;
        Node<T> *right;
    public:
       Node(void);
       Node(T &data);
       void set_data(T &new_data);
       void set_left(Node<T> *left_node);
       void set_right(Node<T> *right_node);
       T get_data(void);
       Node<T> *get_left(void);
       Node<T> *get_right(void);
};

template<class T>
Node<T>::Node()
{
    data = 0;
    left = NULL;
    right = NULL;
}

template<class T>
Node<T>::Node(T &new_data)
{
    data = new_data;
    left = NULL;
    right = NULL;
}

template<class T>
void Node<T>::set_data(T &new_data)
{
    data = new_data;
}

template<class T>
T Node<T>::get_data()
{
    return data;
}

template<class T>
void Node<T>::set_left(Node<T> *left_node_ptr)
{
   left = left_node_ptr;
}

template<class T>
void Node<T>::set_right(Node<T> *right_node_ptr)
{
   right = right_node_ptr;
}

template<class T>
Node<T> *Node<T>::get_left()
{
    return left;
}

template<class T>
Node<T> *Node<T>::get_right()
{
    return right;
}
