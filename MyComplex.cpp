/*    @file MyComplex.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Implements a class for manipulating complex numbers.
*/

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <stdexcept>
#include "MyComplex.h"

  MyComplex::MyComplex(){
    a = 5;
  }

void MyComplex::print(){
  cout << a << endl;
}

int MyComplex::add(int a, int b){
  return a + b;
}



