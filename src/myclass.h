#ifndef ROOKIE_TEST_H_
#define ROOKIE_TEST_H_

#include <Rcpp.h>
using namespace Rcpp;

class MyClass {
private:
  char* x;

public:
  MyClass() {
    x = new char[10];
  }

  ~MyClass() {
    delete x;
  }
  void sayHello();
};

#endif
