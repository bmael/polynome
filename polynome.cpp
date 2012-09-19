/** 
*	Classe Polynome représentant un polynome
*
**/
#include <math.h>
#include "polynome.h"
 
  #if defined(list)
    #include "linkedlist.h"
  #elif defined(array)
  
  #endif

 
#include <iostream>

using namespace std;

Polynome::Polynome(){
    //the coefficients contener
    #if defined(list)
      coeff_ = new LinkedList();
      cout << "defined(list) for compilation" <<endl;
      
    #elif defined(array)
	//TODO create the new array class and create an instance.
    #endif
      
      //Interaction with user to create a Polynome.
      cout << "X value : " << endl;
      
      int x;
      cin >> x;
      x_ = x;
      
      cout << "Degree of polynome : " << endl;
      
      int degree;
      cin >> degree;
      degres_ = degree;
      
      cout << "Type the coefficients of the polynome : " << endl;
      for(int i=0;i<degres_;i++){
	  cout << "a" << i << " : ";
	  double a;
	  cin >> a;
	  coeff_->add(a);
	  cout << endl;
      }
      
    
}

Polynome::~Polynome(){}

int Polynome::getX() const {
	return this->x_;
}

int Polynome::getDegres() const {
	return this->degres_;
}

Contener * Polynome::getCoeff(){
	return this->coeff_;
}

void Polynome::setX(const int & x){
	x_ = x;
}

void Polynome::setDegres(const int & degres){
	degres_ = degres;
}

void Polynome::setCoeff(Contener * coeff){
	coeff_ = coeff;
}

double Polynome::eval() const{
	double res = 0;
	for(int i=0; i<= this->degres_; i++){
		res += coeff_->get(i)*pow(this->x_,i);
	}

	return res;
}