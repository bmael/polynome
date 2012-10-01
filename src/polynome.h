#ifndef __POLYNOME_H 
#define __POLYNOME_H


/** 
*	\class Polynome polynome.h
*	\author Maël BARBIN 
* 		Julien BIZEUL
* 		Noémie RULLIER
* 	\brief Polynome
**/

#include "contener.h"

class Polynome {
  
	private:
	  int x_;
	  int degres_;
	  Contener * coeff_;	

	public:
	  Polynome();
	  ~Polynome();

	  //Getters Setters
	  int getX() const;
	  int getDegres() const;
	  Contener * getCoeff();

	  void setX(const int & x);
	  void setDegres(const int & degres);
	  void setCoeff(Contener * coeff);

	  //Methods
	  double eval() const;	// Compute the Polynome 
	  void toString();	// Print the Polynome on the output
	
};

double monpow(double x,int i);

#endif
