#include <iostream>
#include "vetor.h"
#include <cstddef>


template <class T>
Vetor<T>::Vetor() {
    Node<T> node(NULL);
    this->firstElement = &node;
    this->lastElement = nullptr;
}

template <typename T>
Vetor<T>::~Vetor() {

}                                                               


template <class T>
bool Vetor<T>::add(T i_) {
    try {
         Node<T> * newNode = new Node<T>(i_);

         if (this->lastElement == nullptr) {
            this->firstElement->setNextNode(newNode);
            this->lastElement = newNode;
         } else {
             this->lastElement->setNextNode(newNode);
             this->lastElement = newNode;
         }

         return true;

    } catch (int i_) {    
        return false;
    }
}

template <class T>
void Vetor<T>::show() {
    Node<T> * aux = new Node(this->firstElement->getData(), this->firstElement->getNextNode());
    cout << "{ ";
    while (aux->getNextNode() != nullptr) {
        cout << aux->getData() << " "  ;
        aux = aux->getNextNode();
    }
    cout << lastElement->getData() << " ";
    cout << "}" << endl;
}

template <class T>
int Vetor<T>::size() {
    Node<T> first = *this->firstElement;
    int size = findAmount(1, first);

    return size;
} 

template <class T>
int Vetor<T>::findAmount(int amount, Node<T> node) {
    if (node.getNextNode() == nullptr) {
        return amount;
    }

    return findAmount(amount+1, *node.getNextNode());
}



template class Vetor<int>;
template class Vetor<float>;
template class Vetor<double>;
template class Vetor<std::string>;
