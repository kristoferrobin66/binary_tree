#ifndef TREE_H
#define TREE_H

template <typename T>
class Tree
{
public:
    Tree(){}
    virtual ~Tree(){}

    // ADD
    void push_left();
    void push_right();

    //STATUS
    void level();
    void status();

    // REMOVE
    void pop_left();
    void pop_right();

    // MOVE
    void checkout();

private:
    struct STNode
    {
        STNode(const T& dato, STNode* izq = nullptr, STNode* der = nullptr)
        {
            this->dato = dato;
            this->izq = izq;
            this->der = der;
        }
        T dato;
        STNode* izq;
        STNode* der;
    };
    int treeLevel;
};
#endif

template<typename T>
void Tree<T>::level()
{
    return treeLevel;
}

template<typename T>
void Tree<T>::status()
{

}

template<typename T>
void Tree<T>::push_left()
{

}

template<typename T>
void Tree<T>::push_right()
{

}

template <typename T>
void Tree<T>::pop_left()
{

}

template<typename T>
void Tree<T>::pop_right()
{

}

template<typename T>
void Tree<T>::checkout()
{

}
