#ifndef NODE_H
#define NODE_H
#include <iostream>

template<typename T>
struct Node
{
    Node()
    {
        left = nullptr;
        right = nullptr;
        nodeLevel = 0;
    }
    virtual ~Node(){}

    void push(const T& element);
    bool leaf();

    Node* right;
    Node* left;
    T data;
    size_t nodeLevel;
};
#endif // NODE_H

template <typename T>
bool Node<T>::leaf()
{
    return !(right || left);
}

template <typename T>
void Node<T>::push(const T& element)
{
    if (element > data)
        right = new Node<T>(element);
    else
        left  = new Node<T>(element);
}
