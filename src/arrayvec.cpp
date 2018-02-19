#include "arrayvec.h"

// [[Rcpp::export]]
List matrix_to_tuples(const NumericMatrix& x)
{
  switch(x.ncol())
  {
  case 1: return matrix_to_tuples_<1>(x);
  case 2: return matrix_to_tuples_<2>(x);
  case 3: return matrix_to_tuples_<3>(x);
  case 4: return matrix_to_tuples_<4>(x);
  case 5: return matrix_to_tuples_<5>(x);
  case 6: return matrix_to_tuples_<6>(x);
  case 7: return matrix_to_tuples_<7>(x);
  case 8: return matrix_to_tuples_<8>(x);
  case 9: return matrix_to_tuples_<9>(x);
  default: stop("Invalid dimensions");
  }
}

// [[Rcpp::export]]
NumericMatrix tuples_to_matrix(List x)
{
  if (!x.inherits("arrayvec"))
    stop("Expecting arrayvec object");
  switch(arrayvec_dim(x))
  {
  case 1: return tuples_to_matrix_<1>(x);
  case 2: return tuples_to_matrix_<2>(x);
  case 3: return tuples_to_matrix_<3>(x);
  case 4: return tuples_to_matrix_<4>(x);
  case 5: return tuples_to_matrix_<5>(x);
  case 6: return tuples_to_matrix_<6>(x);
  case 7: return tuples_to_matrix_<7>(x);
  case 8: return tuples_to_matrix_<8>(x);
  case 9: return tuples_to_matrix_<9>(x);
  default: stop("Invalid dimensions");
  }
}
