#ifndef __LINKEDLIST_H 
#define __LINKEDLIST_H

#include "contener.h"

class LinkedList : public Contener{

	private:
		struct node
        {
            double data;
            node *link;
         }*p;

	public: 
		LinkedList();
		~LinkedList();

		double get(const int & index)const;
		void add(const double & data);
		
};

#endif