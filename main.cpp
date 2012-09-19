#include "polynome.h"

#include <iostream>

using namespace std;

void doAction(int action,Polynome * poly){
 switch(action){
   case 0: return;
	  break;
	  
  case 1: poly = new Polynome();
	  break;
 }
}

int main(int argc, char ** argv) {
 
  Polynome * poly;
  
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
  
  delete poly;
  
return 0;
}
