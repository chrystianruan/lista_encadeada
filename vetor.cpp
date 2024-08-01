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
    delete aux;
}

template <class T>
int Vetor<T>::size() {
    if (this->firstElement->getNextNode() == nullptr) {
        return 0;
    }
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
    int i = 0;

    while (aux != nullptr) {
        if (i == i_) {
            return aux->getData();
        }
        aux = aux->getNextNode();
        i++;
    }

    delete aux;

    return 0;

}

template <typename T>
bool Vetor<T>::remove(int _i) {
    if (_i == 0) {
        this->firstElement = this->firstElement->getNextNode(); 
        
        return true;
    }
    Node<T> * previous; 
    Node<T> * atual = this->firstElement;


    for (int i = 0; i <= _i; i++) {
        if (atual == nullptr || i > size()-1) {
            throw "Índice não disponível";
        } else {
            if (i == _i) {
                previous->setNextNode(atual->getNextNode());
                delete atual;
                return true;
            }
        }
        previous = atual;
        atual = atual->getNextNode();
      
    }

    return false;
    
}

template <class T>
bool Vetor<T>::sort(bool (*func_compara) (T, T)) {
    try {
        int i, j; 
        Node<T> * aux = this->firstElement;
        Node<T> * previous = nullptr;
        if (size() - 1) {
            return false;
        }
        for (i = 0; i < size() - 1; i++) {
            for (j = 0; j < size() - i - 1; j++) {
                if (j == 0) {
                    if (func_compara(this->firstElement->getData(), this->firstElement->getNextNode()->getData())) {
                        cout << previous->getData() << endl;
                    } 
                } else {

                }
            }
            previous = aux;
            aux = aux->getNextNode();
        }

        return true;
    } catch (int i) {
        return false;
    }

}



template class Vetor<int>;
template class Vetor<float>;
template class Vetor<double>;
template class Vetor<std::string>;
