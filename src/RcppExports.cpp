// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;


RcppExport SEXP _rcpp_module_boot_die_cpp();
RcppExport SEXP _rcpp_module_boot_double_cpp();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_die_cpp", (DL_FUNC) &_rcpp_module_boot_die_cpp, 0},
    {"_rcpp_module_boot_double_cpp", (DL_FUNC) &_rcpp_module_boot_double_cpp, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_CamelUp2_0(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
