// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// main_fun
DataFrame main_fun(NumericMatrix X, IntegerVector Npar, IntegerVector nodetype, IntegerMatrix par, const int graph_source, const int graph_target, const int graph_node_labels, int MaxPar, const double phi, const double omega, const int InitialNetwork, const int drop, int N, int output);
RcppExport SEXP _bayesnetworks_main_fun(SEXP XSEXP, SEXP NparSEXP, SEXP nodetypeSEXP, SEXP parSEXP, SEXP graph_sourceSEXP, SEXP graph_targetSEXP, SEXP graph_node_labelsSEXP, SEXP MaxParSEXP, SEXP phiSEXP, SEXP omegaSEXP, SEXP InitialNetworkSEXP, SEXP dropSEXP, SEXP NSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Npar(NparSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nodetype(nodetypeSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type par(parSEXP);
    Rcpp::traits::input_parameter< const int >::type graph_source(graph_sourceSEXP);
    Rcpp::traits::input_parameter< const int >::type graph_target(graph_targetSEXP);
    Rcpp::traits::input_parameter< const int >::type graph_node_labels(graph_node_labelsSEXP);
    Rcpp::traits::input_parameter< int >::type MaxPar(MaxParSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< const int >::type InitialNetwork(InitialNetworkSEXP);
    Rcpp::traits::input_parameter< const int >::type drop(dropSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type output(outputSEXP);
    rcpp_result_gen = Rcpp::wrap(main_fun(X, Npar, nodetype, par, graph_source, graph_target, graph_node_labels, MaxPar, phi, omega, InitialNetwork, drop, N, output));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bayesnetworks_main_fun", (DL_FUNC) &_bayesnetworks_main_fun, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayesnetworks(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
