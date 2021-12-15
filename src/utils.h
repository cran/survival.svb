#ifndef UTILS_H
#define UTILS_H

#include "RcppEigen.h"
#include "survival.svb_types.h"

// normal mgf funcs
double normal_mgf(double x, double m, double s);
vec log_normal_mgf(const vec &x, double m, double s);
double log_normal_mgf(double x, double m, double s);

// log P
vec init_log_P(const mat &X, const vec &m, const vec &s, const vec &g);
void rm_log_P(vec &P, const vec &x_j, double m, double s, double g);
void add_log_P(vec &P, const vec &x_j, double m, double s, double g);

// misc
double sigmoid(double x);
std::vector<unsigned int> order_T(const vec &T);
std::vector<unsigned int> order_delta(const vec &T, const vec &delta);
double log_likelihood(const vec &T, const vec &delta, const mat &X, const vec &b);


#endif
