#include "myclass.h"
#include <Rcpp.h>
using namespace Rcpp;

void MyClass::sayHello() {
  Rcout << "Hello.";
}
