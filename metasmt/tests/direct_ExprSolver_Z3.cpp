#define BOOST_TEST_MODULE direct_ExprSolver_Z3
#include <metaSMT/support/default_visitation_unrolling_limit.hpp>
#include <metaSMT/DirectSolver_Context.hpp>
#include <metaSMT/backend/Z3_Backend.hpp>
#include <metaSMT/backend/ExpressionSolver.hpp>
#include <metaSMT/API/Stack.hpp>

using namespace metaSMT::solver;
using namespace metaSMT;
struct Solver_Fixture {
  typedef DirectSolver_Context< Stack< ExpressionSolver< Z3_Backend > > > ContextType;
  ContextType ctx ;
};

#include "test_solver.cpp"
#include "test_QF_BV.cpp"
#include "test_Array.cpp"
#include "test_stack.cpp"
