#include "polynome.h"

#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
 
  Polynome * poly = new Polynome();
  
  int action;
  //Interpret the user action
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
  }while(action!=0);
  
return 0;
}
