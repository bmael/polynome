#ifndef __LINKEDLIST_H 
#define __LINKEDLIST_H

/**
 * \class LinkedList linkedlist.h
 * \author Maël BARBIN 
* 	   Julien BIZEUL
* 	   Noémie RULLIER
* A basic LinkedList of double
 */

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

	  void add(const double & data);	// Return the double at the index i
	  double get(const int & index)const;	// Add a double to the contener
		
};

#endif