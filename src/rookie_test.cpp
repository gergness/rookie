#include "myclass.h"
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void rookie_test() {
  MyClass x = MyClass();
  x.sayHello();
  return;
}
