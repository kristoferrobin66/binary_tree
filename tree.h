#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <stdexcept>
#include "node.h"

template <typename T>
class Tree
{
public:
    Tree()
    { root = nullptr; }
    virtual ~Tree(){}

    void push(const T& element = 0);
    void show();

private:
    Node<T>* root;
};
#endif

template <typename T>
void Tree<T>::push(const T& element)
{
    node_push(root, element);
}

template <typename T>
void Tree<T>::show()
{
    show_inorder(root);
}
