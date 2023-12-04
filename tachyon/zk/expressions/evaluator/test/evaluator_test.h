// Copyright 2020-2022 The Electric Coin Company
// Copyright 2022 The Halo2 developers
// Use of this source code is governed by a MIT/Apache-2.0 style license that
// can be found in the LICENSE-MIT.halo2 and the LICENCE-APACHE.halo2
// file.

#ifndef TACHYON_ZK_EXPRESSIONS_EVALUATOR_TEST_EVALUATOR_TEST_H_
#define TACHYON_ZK_EXPRESSIONS_EVALUATOR_TEST_EVALUATOR_TEST_H_

#include <vector>

#include "gtest/gtest.h"

#include "tachyon/math/finite_fields/test/gf7.h"
#include "tachyon/math/polynomials/univariate/univariate_evaluations.h"

namespace tachyon::zk {

constexpr size_t kMaxDegree = 5;

using GF7 = math::GF7;
using Evals = math::UnivariateEvaluations<GF7, kMaxDegree>;

class EvaluatorTest : public testing::Test {
 public:
  static void SetUpTestSuite() { math::GF7::Init(); }

 protected:
  std::vector<Evals> fixed_columns_;
  std::vector<Evals> advice_columns_;
  std::vector<Evals> instance_columns_;
  std::vector<GF7> challenges_;
};

}  // namespace tachyon::zk

#endif  // TACHYON_ZK_EXPRESSIONS_EVALUATOR_TEST_EVALUATOR_TEST_H_