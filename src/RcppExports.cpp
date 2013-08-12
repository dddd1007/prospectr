// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// bitAND
int bitAND(int aa, int bb);
RcppExport SEXP prospectr_bitAND(SEXP aaSEXP, SEXP bbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    int aa = Rcpp::as<int >(aaSEXP);
    int bb = Rcpp::as<int >(bbSEXP);
    int __result = bitAND(aa, bb);
    return Rcpp::wrap(__result);
END_RCPP
}
// bitSR
int bitSR(int a, int b);
RcppExport SEXP prospectr_bitSR(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    int a = Rcpp::as<int >(aSEXP);
    int b = Rcpp::as<int >(bSEXP);
    int __result = bitSR(a, b);
    return Rcpp::wrap(__result);
END_RCPP
}
// convCppM
NumericMatrix convCppM(NumericMatrix X, NumericVector f);
RcppExport SEXP prospectr_convCppM(SEXP XSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix X = Rcpp::as<NumericMatrix >(XSEXP);
    NumericVector f = Rcpp::as<NumericVector >(fSEXP);
    NumericMatrix __result = convCppM(X, f);
    return Rcpp::wrap(__result);
END_RCPP
}
// convCppV
NumericVector convCppV(NumericVector X, NumericVector f);
RcppExport SEXP prospectr_convCppV(SEXP XSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector X = Rcpp::as<NumericVector >(XSEXP);
    NumericVector f = Rcpp::as<NumericVector >(fSEXP);
    NumericVector __result = convCppV(X, f);
    return Rcpp::wrap(__result);
END_RCPP
}
// fastDist
arma::mat fastDist(NumericMatrix X, NumericMatrix Y, String method);
RcppExport SEXP prospectr_fastDist(SEXP XSEXP, SEXP YSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix X = Rcpp::as<NumericMatrix >(XSEXP);
    NumericMatrix Y = Rcpp::as<NumericMatrix >(YSEXP);
    String method = Rcpp::as<String >(methodSEXP);
    arma::mat __result = fastDist(X, Y, method);
    return Rcpp::wrap(__result);
END_RCPP
}
// fastDistV
NumericVector fastDistV(NumericMatrix X, NumericVector Y, String method);
RcppExport SEXP prospectr_fastDistV(SEXP XSEXP, SEXP YSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix X = Rcpp::as<NumericMatrix >(XSEXP);
    NumericVector Y = Rcpp::as<NumericVector >(YSEXP);
    String method = Rcpp::as<String >(methodSEXP);
    NumericVector __result = fastDistV(X, Y, method);
    return Rcpp::wrap(__result);
END_RCPP
}
// ResampleCppM
NumericMatrix ResampleCppM(NumericMatrix X, NumericVector wav, NumericVector new_wav, NumericVector fwhm);
RcppExport SEXP prospectr_ResampleCppM(SEXP XSEXP, SEXP wavSEXP, SEXP new_wavSEXP, SEXP fwhmSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix X = Rcpp::as<NumericMatrix >(XSEXP);
    NumericVector wav = Rcpp::as<NumericVector >(wavSEXP);
    NumericVector new_wav = Rcpp::as<NumericVector >(new_wavSEXP);
    NumericVector fwhm = Rcpp::as<NumericVector >(fwhmSEXP);
    NumericMatrix __result = ResampleCppM(X, wav, new_wav, fwhm);
    return Rcpp::wrap(__result);
END_RCPP
}
// ResampleCppV
NumericVector ResampleCppV(NumericVector X, NumericVector wav, NumericVector new_wav, NumericVector fwhm);
RcppExport SEXP prospectr_ResampleCppV(SEXP XSEXP, SEXP wavSEXP, SEXP new_wavSEXP, SEXP fwhmSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericVector X = Rcpp::as<NumericVector >(XSEXP);
    NumericVector wav = Rcpp::as<NumericVector >(wavSEXP);
    NumericVector new_wav = Rcpp::as<NumericVector >(new_wavSEXP);
    NumericVector fwhm = Rcpp::as<NumericVector >(fwhmSEXP);
    NumericVector __result = ResampleCppV(X, wav, new_wav, fwhm);
    return Rcpp::wrap(__result);
END_RCPP
}
// residLm
NumericMatrix residLm(NumericMatrix Yr, NumericMatrix Xr);
RcppExport SEXP prospectr_residLm(SEXP YrSEXP, SEXP XrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    NumericMatrix Yr = Rcpp::as<NumericMatrix >(YrSEXP);
    NumericMatrix Xr = Rcpp::as<NumericMatrix >(XrSEXP);
    NumericMatrix __result = residLm(Yr, Xr);
    return Rcpp::wrap(__result);
END_RCPP
}
