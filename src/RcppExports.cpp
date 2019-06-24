// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fit_network
int fit_network(NumericMatrix X, IntegerVector Npar, IntegerVector nodetype, IntegerMatrix par, int MaxPar);
RcppExport SEXP _bayesnetworks_fit_network(SEXP XSEXP, SEXP NparSEXP, SEXP nodetypeSEXP, SEXP parSEXP, SEXP MaxParSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Npar(NparSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodetype(nodetypeSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type par(parSEXP);
    Rcpp::traits::input_parameter< int >::type MaxPar(MaxParSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_network(X, Npar, nodetype, par, MaxPar));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bayesnetworks_fit_network", (DL_FUNC) &_bayesnetworks_fit_network, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayesnetworks(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
