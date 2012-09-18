#ifndef __POLYNOME_H 
#define __POLYNOME_H


/** 
*	Classe Polynome représentant un polynome
*
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
		double eval() const;
	
};
#endif