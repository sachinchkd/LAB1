#ifndef __LinkedList.h__
#define __LinkedList.h__

#include <iostream>

class Node
{

    public:
        int info;
        Node * next;

        Node(){}
        Node(int d, Node next ): info(d), next(nullptr) {}
        
};



#endif