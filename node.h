#ifndef NODE_H
#define NODE_H

#include<iostream>

template<class T>
struct Node
{
    Node(const T& element)
    {
        data = element;
        right = nullptr;
        left = nullptr;
    }
    virtual ~Node(){}

    // Atricutes
    T data;
    Node<T>* right;
    Node<T>* left;
};

// push() function (NOT METHOD)
template <typename T>
void node_push(Node<T>*& node, const T& element)
{
    if (node == nullptr)
        node = new Node<T>(element);
    else if(element == node->data)
        throw std::range_error("Node already in tree");
    else if(element < node->data)
        node_push(node->left, element);
    else if(element > node->data)
        node_push(node->right, element);
}

// show_inorder() function (NOT METHOD)
template <typename T>
void show_inorder(Node<T>*& node)
{
    if(!node)
        return;
    else
    {
        show_inorder(node->left);
        std::cout << node->data << std::endl;

        show_inorder(node->right);
    }
}

#endif
