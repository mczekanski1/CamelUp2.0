// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// RandomNum
int RandomNum(int N);
RcppExport SEXP _CamelUp2_0_RandomNum(SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(RandomNum(N));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_board_cpp();
RcppExport SEXP _rcpp_module_boot_camel_cpp();
RcppExport SEXP _rcpp_module_boot_die_cpp();
RcppExport SEXP _rcpp_module_boot_space_cpp();
RcppExport SEXP _rcpp_module_boot_double_cpp();

static const R_CallMethodDef CallEntries[] = {
    {"_CamelUp2_0_RandomNum", (DL_FUNC) &_CamelUp2_0_RandomNum, 1},
    {"_rcpp_module_boot_board_cpp", (DL_FUNC) &_rcpp_module_boot_board_cpp, 0},
    {"_rcpp_module_boot_camel_cpp", (DL_FUNC) &_rcpp_module_boot_camel_cpp, 0},
    {"_rcpp_module_boot_die_cpp", (DL_FUNC) &_rcpp_module_boot_die_cpp, 0},
    {"_rcpp_module_boot_space_cpp", (DL_FUNC) &_rcpp_module_boot_space_cpp, 0},
    {"_rcpp_module_boot_double_cpp", (DL_FUNC) &_rcpp_module_boot_double_cpp, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_CamelUp2_0(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
