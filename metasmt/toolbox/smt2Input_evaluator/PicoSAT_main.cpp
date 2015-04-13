#include <metaSMT/support/default_visitation_unrolling_limit.hpp>
#include <metaSMT/DirectSolver_Context.hpp>
#include <metaSMT/API/Stack.hpp>
#include <metaSMT/API/SymbolTable.hpp>
#include <metaSMT/backend/PicoSAT.hpp>
#include <metaSMT/backend/SAT_Clause.hpp>
#include <metaSMT/API/Group.hpp>
#include <metaSMT/BitBlast.hpp>
#include "options.hpp"
typedef
  metaSMT::DirectSolver_Context<
    metaSMT::IgnoreSymbolTable<
      metaSMT::Group<
        metaSMT::BitBlast<
          metaSMT::SAT_Clause<
            metaSMT::Stack<metaSMT::solver::PicoSAT>
          >
        >
      >
    >
  > ContextType;
OptionMap options;
#include "main.cpp"
