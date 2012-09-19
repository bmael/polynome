#include "polynome.h"

#include <iostream>

using namespace std;

/**
 * Execute the action chosen by the user.
 * \param[in] action the action chosen by the user
 * */
void doAction(int action,Polynome *& poly){
 switch(action){
   case 0: return;
	  break;
	  
  case 1: poly = new Polynome();
	  break;
	  
  case 2: poly->toString();
	  break;
	  
  case 3: cout << "S = " << poly->eval() << endl;
	  break;
 }
}


/**
 *  Main program : Create an empty polynome and display the actions that the 
 * user can do and finaly execute the action chosen. 
 **/
int main(int argc, char ** argv) {
 
  Polynome * poly = 0;
  
  int action;
  
  //Display the actions that user can do
  do{
    cout << "##########################" << endl;
    cout << "##       POLYGONE       ##" << endl;
    cout << "##########################" << endl;
    
    cout << endl;
    cout << "1---Create a Polynome" << endl;
    cout << "2---Display the Polynome" << endl;
    cout << "3---Compute the Polynome" << endl;
    cout << "0-------------------Quit" << endl;
    cout << "--------------------------";
    
    cin >> action;
    
    doAction(action,poly);
    
  }while(action!=0);
  
  if(poly!=0) delete poly; //free the memory
  
  
return 0;
}
