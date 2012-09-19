#ifndef __ARRAY_H
#define __ARRAY_H

/**
 * \class Array array.h
 * \author Maël BARBIN 
* 	   Julien BIZEUL
* 	   Noémie RULLIER
* 
* \brief Array based on std::vector
* 
 * */

#include "contener.h"
#include <vector>

class Array : public Contener{

	private:
	  std::vector<double> arr_;

	public: 
	  Array();
	  ~Array();

	  double get(const int & index)const; 	// Return the double at the index i
	  void add(const double & data);	// Add a double to the contener
		
};

#endif
