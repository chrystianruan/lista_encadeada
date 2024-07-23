#ifndef _CLASS_VETOR_
	#define _CLASS_VETOR_

#include <iostream>
#include <string>
#include "node.h"

using namespace std;

template <class T>
class Vetor {
    private:
        Node<T> * firstElement;
        Node<T> * lastElement;
        int findAmount(int amount, Node<T> node);

    public:
        Vetor();
        ~Vetor();
        int size();
        bool add(T i_);
        bool remove(int i);
        void show();
        T at(int i);
        // bool sort ( func_compara );

};




#endif