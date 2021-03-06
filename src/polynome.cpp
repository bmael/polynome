#include <math.h>
#include "polynome.h"
 
  #if defined(list)
    #include "linkedlist.h"
  #elif defined(array)
    #include "array.h"
  #endif

 
#include <iostream>

using namespace std;

/**
 * \brief Construct a Polynome with an interaction with the user
 **/
Polynome::Polynome(){
    //the type of the contener is defined during the compilation of the program
    #if defined(list)
      coeff_ = new LinkedList();     
    #elif defined(array)
	coeff_ = new Array();
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

/**
 * \brief Destroy the Polynome
 * */
Polynome::~Polynome(){}


/**
 * \return Return x value of the Polynome
 **/
int Polynome::getX() const {
	return this->x_;
}

/**
 * \return Return the degree of the Polynome
 * */
int Polynome::getDegres() const {
	return this->degres_;
}

/**
 * \return Return the Contener of the coefficients of the Polynome
 * */
Contener * Polynome::getCoeff(){
	return this->coeff_;
}

/**
 * \param[in] x the x value of the Polynome
 * */
void Polynome::setX(const int & x){
	x_ = x;
}

/**
 * \param[in] degres the degree of the Polynome
 * */
void Polynome::setDegres(const int & degres){
	degres_ = degres;
}

/**
 * \param[in] coeff the contener of coefficients of the Polynome
 * */
void Polynome::setCoeff(Contener * coeff){
	coeff_ = coeff;
}

/**
 * \brief Compute the Polynome
 * \return Return the value of the Polynome
 */
double Polynome::eval() const{
	double res = 0;
	for(int i=0; i< this->degres_; i++){
		res += coeff_->get(i)*pow(this->x_,i);
	}

	return res;
}

/**
 * \brief Print the Polynome on the output
 * */
void Polynome::toString(){
  cout << "degree = " << this->degres_ <<endl;
    for(int i=0;i<this->degres_;i++){
      cout << coeff_->get(i) << " * " << x_ << "^" << i;
      if(i<this->degres_-1) cout << " + ";
    }
    cout << endl;
}
