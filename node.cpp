#include <iostream>
#include "node.h"


template <typename T>
Node<T>::Node(T _data) {
    this->data = _data;
    this->nextNode = nullptr;
}

template <typename T>
Node<T>::Node(T _data, Node<T> * _nextNode) {
    this->data = _data;
    this->nextNode = _nextNode;
}

template <typename T>
T Node<T>::getData() {
    return this->data;
}

template <typename T>
void Node<T>::setData(T _data) {
    this->data = _data;
}

template <typename T>
Node<T> * Node<T>::getNextNode() {
    return this->nextNode;
}

template <typename T>
void Node<T>::setNextNode(Node<T> *_nextNode) {
    this->nextNode = _nextNode;
} 

template class Node<int>;
template class Node<float>;
template class Node<double>;
template class Node<std::string>;