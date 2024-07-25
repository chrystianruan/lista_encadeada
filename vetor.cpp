#include <iostream>
#include "vetor.h"
#include <cstddef>


template <class T>
Vetor<T>::Vetor() {
    this->firstElement = nullptr;
    this->lastElement = nullptr;
}

template <typename T>
Vetor<T>::~Vetor() {

}                                                               


template <class T>
bool Vetor<T>::add(T i_) {
    try {
         Node<T> * newNode = new Node<T>(i_);
       
         if (this->firstElement == nullptr) {
            this->firstElement = newNode;
         } else {
            if (this->lastElement == nullptr) {
                this->lastElement = newNode;
                this->firstElement->setNextNode(newNode);
            } else {
                this->lastElement->setNextNode(newNode);   
                this->lastElement = newNode;
            }
         }

         return true;

    } catch (int i_) {    
        return false;
    }
}

template <class T>
void Vetor<T>::show() {
    Node<T> * aux = this->firstElement;
    cout << "{ ";
    while (aux != nullptr) {
        cout << aux->getData() << " "  ;
        aux = aux->getNextNode();
    }
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

template <class T> 
T Vetor<T>::at(int i_) {
    Node<T> * aux = this->firstElement;
    T data;

    for (int i = 0; i <= i_; i++) {
        if (aux == nullptr) {
            throw "Índice não disponível";
        } else {
             if (i == i_) {
                data = aux->getData();
                break;
            }
        }
        aux = aux->getNextNode();  
    }

    return data;

}

template <class T>
bool Vetor<T>::remove(int _i) {
    if (_i == 0) {
        this->firstElement = this->firstElement->getNextNode();
        return true;
    }

    Node<T> * atual = this->firstElement;
    Node<T> * previous; 
    Node<T> * next;

    for (int i = 0; i <= _i; i++) {
        if (atual == nullptr || i > size()-1) {
            throw "Índice não disponível";
        } else {
            if (i == _i) {
                bool ultimoElemento = i == size()-1;
                previous->setNextNode(ultimoElemento ? nullptr : next);
                if (ultimoElemento) {
                    this->lastElement = previous; 
                }
                return true;
            }
        }
        previous = atual;
        atual = atual->getNextNode();
        next = atual->getNextNode();
      
    }

    return false;
    
}



template class Vetor<int>;
template class Vetor<float>;
template class Vetor<double>;
template class Vetor<std::string>;
