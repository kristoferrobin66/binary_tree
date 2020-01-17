#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <stdexcept>
#include "node.h"

template <typename T>
class Tree
{
public:
    Tree(){}
    virtual ~Tree(){}

    void push(const T& element);
    void pop();

private:
    Node<T> root;
};
#endif

template <typename T>
void Tree<T>::push(const T& element)
{
    if (!root)
        root = new Node<T>(element);
    else
    {
        Node<T>* node = root;
        while(!node->leaf())
        {
            if (node->data > element)
                node = node->right;
            else
                node = node->left;
        }
        node->push(element);
    }
}
