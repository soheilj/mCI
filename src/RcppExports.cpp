// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// usable
bool usable(double x1, double x2, double delta);
RcppExport SEXP _mCI_usable(SEXP x1SEXP, SEXP x2SEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(usable(x1, x2, delta));
    return rcpp_result_gen;
END_RCPP
}
// usable_2
double usable_2(double x1, double x2, double delta);
RcppExport SEXP _mCI_usable_2(SEXP x1SEXP, SEXP x2SEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(usable_2(x1, x2, delta));
    return rcpp_result_gen;
END_RCPP
}
// concordanceIndex_modified_helper
List concordanceIndex_modified_helper(std::vector<double> x, std::vector<double> y, double deltaX, double deltaY, double alpha, bool outx, std::string alternative, std::string logicOp);
RcppExport SEXP _mCI_concordanceIndex_modified_helper(SEXP xSEXP, SEXP ySEXP, SEXP deltaXSEXP, SEXP deltaYSEXP, SEXP alphaSEXP, SEXP outxSEXP, SEXP alternativeSEXP, SEXP logicOpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type deltaX(deltaXSEXP);
    Rcpp::traits::input_parameter< double >::type deltaY(deltaYSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type outx(outxSEXP);
    Rcpp::traits::input_parameter< std::string >::type alternative(alternativeSEXP);
    Rcpp::traits::input_parameter< std::string >::type logicOp(logicOpSEXP);
    rcpp_result_gen = Rcpp::wrap(concordanceIndex_modified_helper(x, y, deltaX, deltaY, alpha, outx, alternative, logicOp));
    return rcpp_result_gen;
END_RCPP
}
// kernel_gaussian_C
double kernel_gaussian_C(double x, double m, double s);
RcppExport SEXP _mCI_kernel_gaussian_C(SEXP xSEXP, SEXP mSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel_gaussian_C(x, m, s));
    return rcpp_result_gen;
END_RCPP
}
// kernel_laplace_C
double kernel_laplace_C(double x, double m, double b);
RcppExport SEXP _mCI_kernel_laplace_C(SEXP xSEXP, SEXP mSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel_laplace_C(x, m, b));
    return rcpp_result_gen;
END_RCPP
}
// concordanceIndex_modified_helper_weighted
List concordanceIndex_modified_helper_weighted(std::vector<double> x, std::vector<double> y, std::vector<double> deltaX, std::vector<double> deltaY, std::string weightingFun_pred, std::string weightingFun_obs, double alpha, bool outx, std::string alternative, std::string logicOp, double max_weight, double max_weight_obs, bool permute_weights);
RcppExport SEXP _mCI_concordanceIndex_modified_helper_weighted(SEXP xSEXP, SEXP ySEXP, SEXP deltaXSEXP, SEXP deltaYSEXP, SEXP weightingFun_predSEXP, SEXP weightingFun_obsSEXP, SEXP alphaSEXP, SEXP outxSEXP, SEXP alternativeSEXP, SEXP logicOpSEXP, SEXP max_weightSEXP, SEXP max_weight_obsSEXP, SEXP permute_weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type deltaX(deltaXSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type deltaY(deltaYSEXP);
    Rcpp::traits::input_parameter< std::string >::type weightingFun_pred(weightingFun_predSEXP);
    Rcpp::traits::input_parameter< std::string >::type weightingFun_obs(weightingFun_obsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type outx(outxSEXP);
    Rcpp::traits::input_parameter< std::string >::type alternative(alternativeSEXP);
    Rcpp::traits::input_parameter< std::string >::type logicOp(logicOpSEXP);
    Rcpp::traits::input_parameter< double >::type max_weight(max_weightSEXP);
    Rcpp::traits::input_parameter< double >::type max_weight_obs(max_weight_obsSEXP);
    Rcpp::traits::input_parameter< bool >::type permute_weights(permute_weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(concordanceIndex_modified_helper_weighted(x, y, deltaX, deltaY, weightingFun_pred, weightingFun_obs, alpha, outx, alternative, logicOp, max_weight, max_weight_obs, permute_weights));
    return rcpp_result_gen;
END_RCPP
}
// concordanceIndex_modified_helper_weighted_withStratify
List concordanceIndex_modified_helper_weighted_withStratify(std::vector<double> x, std::vector<double> y, std::vector<double> deltaX, std::vector<double> deltaY, std::string weightingFun_pred, std::string weightingFun_obs, double alpha, bool outx, std::string alternative, std::string logicOp, double max_weight, double max_weight_obs, bool permute_weights, std::vector<int> groups);
RcppExport SEXP _mCI_concordanceIndex_modified_helper_weighted_withStratify(SEXP xSEXP, SEXP ySEXP, SEXP deltaXSEXP, SEXP deltaYSEXP, SEXP weightingFun_predSEXP, SEXP weightingFun_obsSEXP, SEXP alphaSEXP, SEXP outxSEXP, SEXP alternativeSEXP, SEXP logicOpSEXP, SEXP max_weightSEXP, SEXP max_weight_obsSEXP, SEXP permute_weightsSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type deltaX(deltaXSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type deltaY(deltaYSEXP);
    Rcpp::traits::input_parameter< std::string >::type weightingFun_pred(weightingFun_predSEXP);
    Rcpp::traits::input_parameter< std::string >::type weightingFun_obs(weightingFun_obsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type outx(outxSEXP);
    Rcpp::traits::input_parameter< std::string >::type alternative(alternativeSEXP);
    Rcpp::traits::input_parameter< std::string >::type logicOp(logicOpSEXP);
    Rcpp::traits::input_parameter< double >::type max_weight(max_weightSEXP);
    Rcpp::traits::input_parameter< double >::type max_weight_obs(max_weight_obsSEXP);
    Rcpp::traits::input_parameter< bool >::type permute_weights(permute_weightsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type groups(groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(concordanceIndex_modified_helper_weighted_withStratify(x, y, deltaX, deltaY, weightingFun_pred, weightingFun_obs, alpha, outx, alternative, logicOp, max_weight, max_weight_obs, permute_weights, groups));
    return rcpp_result_gen;
END_RCPP
}
// concordanceIndex_modified_helper_parallel
List concordanceIndex_modified_helper_parallel(std::vector<double> x, std::vector<double> y, double deltaX, double deltaY, double alpha, bool outx, std::string alternative, std::string logicOp);
RcppExport SEXP _mCI_concordanceIndex_modified_helper_parallel(SEXP xSEXP, SEXP ySEXP, SEXP deltaXSEXP, SEXP deltaYSEXP, SEXP alphaSEXP, SEXP outxSEXP, SEXP alternativeSEXP, SEXP logicOpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type deltaX(deltaXSEXP);
    Rcpp::traits::input_parameter< double >::type deltaY(deltaYSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type outx(outxSEXP);
    Rcpp::traits::input_parameter< std::string >::type alternative(alternativeSEXP);
    Rcpp::traits::input_parameter< std::string >::type logicOp(logicOpSEXP);
    rcpp_result_gen = Rcpp::wrap(concordanceIndex_modified_helper_parallel(x, y, deltaX, deltaY, alpha, outx, alternative, logicOp));
    return rcpp_result_gen;
END_RCPP
}
// concordanceIndex_modified_AllinC
List concordanceIndex_modified_AllinC(std::vector<double> x, std::vector<double> y, double deltaX, double deltaY, double alpha, bool outx, std::string alternative, std::string logicOp);
RcppExport SEXP _mCI_concordanceIndex_modified_AllinC(SEXP xSEXP, SEXP ySEXP, SEXP deltaXSEXP, SEXP deltaYSEXP, SEXP alphaSEXP, SEXP outxSEXP, SEXP alternativeSEXP, SEXP logicOpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type deltaX(deltaXSEXP);
    Rcpp::traits::input_parameter< double >::type deltaY(deltaYSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type outx(outxSEXP);
    Rcpp::traits::input_parameter< std::string >::type alternative(alternativeSEXP);
    Rcpp::traits::input_parameter< std::string >::type logicOp(logicOpSEXP);
    rcpp_result_gen = Rcpp::wrap(concordanceIndex_modified_AllinC(x, y, deltaX, deltaY, alpha, outx, alternative, logicOp));
    return rcpp_result_gen;
END_RCPP
}
// shuffle
std::vector<double> shuffle(std::vector<double> array);
RcppExport SEXP _mCI_shuffle(SEXP arraySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type array(arraySEXP);
    rcpp_result_gen = Rcpp::wrap(shuffle(array));
    return rcpp_result_gen;
END_RCPP
}
// shuffleInt
std::vector<int> shuffleInt(std::vector<int> array);
RcppExport SEXP _mCI_shuffleInt(SEXP arraySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type array(arraySEXP);
    rcpp_result_gen = Rcpp::wrap(shuffleInt(array));
    return rcpp_result_gen;
END_RCPP
}
// permute_concordanceIndex_modified
std::vector<double> permute_concordanceIndex_modified(std::vector<double> x, std::vector<double> y, double deltaX, double deltaY, double alpha, int outx, int permutations, int nThreads);
RcppExport SEXP _mCI_permute_concordanceIndex_modified(SEXP xSEXP, SEXP ySEXP, SEXP deltaXSEXP, SEXP deltaYSEXP, SEXP alphaSEXP, SEXP outxSEXP, SEXP permutationsSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type deltaX(deltaXSEXP);
    Rcpp::traits::input_parameter< double >::type deltaY(deltaYSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type outx(outxSEXP);
    Rcpp::traits::input_parameter< int >::type permutations(permutationsSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(permute_concordanceIndex_modified(x, y, deltaX, deltaY, alpha, outx, permutations, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello
List rcpp_hello();
RcppExport SEXP _mCI_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mCI_usable", (DL_FUNC) &_mCI_usable, 3},
    {"_mCI_usable_2", (DL_FUNC) &_mCI_usable_2, 3},
    {"_mCI_concordanceIndex_modified_helper", (DL_FUNC) &_mCI_concordanceIndex_modified_helper, 8},
    {"_mCI_kernel_gaussian_C", (DL_FUNC) &_mCI_kernel_gaussian_C, 3},
    {"_mCI_kernel_laplace_C", (DL_FUNC) &_mCI_kernel_laplace_C, 3},
    {"_mCI_concordanceIndex_modified_helper_weighted", (DL_FUNC) &_mCI_concordanceIndex_modified_helper_weighted, 13},
    {"_mCI_concordanceIndex_modified_helper_weighted_withStratify", (DL_FUNC) &_mCI_concordanceIndex_modified_helper_weighted_withStratify, 14},
    {"_mCI_concordanceIndex_modified_helper_parallel", (DL_FUNC) &_mCI_concordanceIndex_modified_helper_parallel, 8},
    {"_mCI_concordanceIndex_modified_AllinC", (DL_FUNC) &_mCI_concordanceIndex_modified_AllinC, 8},
    {"_mCI_shuffle", (DL_FUNC) &_mCI_shuffle, 1},
    {"_mCI_shuffleInt", (DL_FUNC) &_mCI_shuffleInt, 1},
    {"_mCI_permute_concordanceIndex_modified", (DL_FUNC) &_mCI_permute_concordanceIndex_modified, 8},
    {"_mCI_rcpp_hello", (DL_FUNC) &_mCI_rcpp_hello, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_mCI(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
