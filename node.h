#ifndef _CLASS_NODE_
	#define _CLASS_NODE_

#include <iostream>

using namespace std;

template <class T>
class Node {
    private:
        T data;
        Node<T> * nextNode;

    public:
        Node(T _data);
        Node(T _data, Node<T> * nextNode);
        T getData();
        void setData(T _data);
        Node<T> * getNextNode();
        void setNextNode(Node<T> *_nextNode);

};

#endif
