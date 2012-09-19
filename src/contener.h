#ifndef __CONTENER_H 
#define __CONTENER_H

/**
 * \class Contener contener.h
 * \author Maël BARBIN 
* 	   Julien BIZEUL
* 	   Noémie RULLIER
* 
* \brief This is an abstract class (can't do an instance of it)
* 
 * */

class Contener {
  
    public:
      virtual void add(const double & data) =0;	// Add a double to the contener
      virtual double get(const int & index)const =0;	// Return the double at the index i

};

#endif