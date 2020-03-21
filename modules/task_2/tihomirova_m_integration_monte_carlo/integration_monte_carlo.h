// Copyright 2020 Tihomirova Mariya
#ifndef MODULES_TASK_2_TIHOMIROVA_M_INTEGRATION_MONTE_CARLO_INTEGRATION_MONTE_CARLO_H_
#define MODULES_TASK_2_TIHOMIROVA_M_INTEGRATION_MONTE_CARLO_INTEGRATION_MONTE_CARLO_H_

#include <vector>
#include <functional>
#include <omp.h>

double getIntegralOMP(int n, const std::vector<double>& low, const std::vector<double>& top,
  const std::function<double(const std::vector<double>&)>& f);

#endif  // MODULES_TASK_2_TIHOMIROVA_M_INTEGRATION_MONTE_CARLO_INTEGRATION_MONTE_CARLO_H_
