#pragma once

#include "../tags/Int.hpp"
#include "../impl/_var_id.hpp"
#include "Logic.hpp"
#include <boost/functional/hash.hpp>
#include <boost/proto/core.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_comparison.hpp>
#include <string>



namespace proto = boost::proto;

namespace metaSMT {

  namespace logic {
    namespace Int{

      struct Int_Grammar;

      // real Grammar
      struct Int_Grammar
      : proto::and_<
	  proto::not_< proto::equal_to< proto::_, proto::_ > >
	, proto::or_<
	    proto::terminal< tag::int_var_tag > 
	  , proto::nary_expr<tag::uint_tag, Int_Grammar> 
	> >
      {};

      template<typename Expr>
      struct Int;

      struct Int_Domain
      : proto::domain<proto::generator<Int>, Int_Grammar>
      {};

      template<typename Expr>
        struct Int 
        : proto::extends<Expr, Int<Expr>, Int_Domain >
        {
          typedef proto::extends<Expr, Int<Expr>, Int_Domain > base_type;

          Int(Expr const & expr = Expr())
            : base_type(expr)
          {}
        };

      template<typename Expr> 
      void check (Int<Expr> const & ) {
        BOOST_MPL_ASSERT((proto::matches<Expr, Int_Grammar>));
      }
      template<typename Expr> 
      void check_not (Int<Expr> const & ) {
        BOOST_MPL_ASSERT_NOT((proto::matches<Expr, Int_Grammar>));
      }

      // constant creation
      typedef proto::result_of::make_expr< tag::uint_tag, Int_Domain
        , unsigned long
        , unsigned long
      > ::type uint_result_type;

      inline uint_result_type
      uint( unsigned long const & value, unsigned long const & width )
      {
        return proto::make_expr< tag::uint_tag, Int_Domain>(value, width);
      } 
      
      typedef
      proto::result_of::make_expr< proto::tag::terminal, Int_Domain
        , tag::int_var_tag
      > ::type myint;

      inline myint
      new_int( unsigned id,
                 unsigned width = 1 )
      {
        tag::int_var_tag tag;
        tag.id = impl::new_var_id();
        tag.width = width;
        return proto::make_expr< proto::tag::terminal, Int_Domain >( tag );
      }

      inline std::size_t hash_value( myint const &a ) {
        tag::int_var_tag const tag = boost::proto::value(a);
        std::size_t seed = 0;
        boost::hash_combine(seed, tag.id);
        return seed;
      }

      inline bool operator==( myint const &lhs, myint const &rhs ) {
	tag::int_var_tag const lhs_tag = proto::value(lhs);
	tag::int_var_tag const rhs_tag = proto::value(rhs);
	return boost::tie(lhs_tag.id, lhs_tag.width) ==
	  boost::tie(rhs_tag.id, rhs_tag.width);
      }
#undef _INT_BINARY_FUNCTION

 #define _INT_UNARY_FUNCTION(NAME_, TAG_) \
      template<typename E1> \
      typename proto::result_of::make_expr< TAG_, Int_Domain, E1 const &>::type \
      NAME_( E1 const& e1) \
      { \
        return proto::make_expr< TAG_, Int_Domain >(boost::cref(e1));\
      } 

	//This is actually binary taking width of bitvector and int as parameters
     // _INT_UNARY_FUNCTION(int_to_bv_tag, tag::int_to_bv_tag)

#undef _INT_UNARY_FUNCTION

 #define _INT_BINARY_FUNCTION(NAME_, TAG_) \
      template<typename E1, typename E2> \
      typename proto::result_of::make_expr< TAG_, Int_Domain, E1 const &, E2 const & >::type \
      NAME_( E1 const& e1, E2 const & e2 ) \
      { \
        return proto::make_expr< TAG_, Int_Domain >(boost::cref(e1), boost::cref(e2));\
      } 

      // bitwise binary
      _INT_BINARY_FUNCTION(intand, tag::intand_tag)
      _INT_BINARY_FUNCTION(intnand, tag::intnand_tag)
      _INT_BINARY_FUNCTION(intor, tag::intor_tag)
      _INT_BINARY_FUNCTION(intnor, tag::intnor_tag)
      _INT_BINARY_FUNCTION(intxor, tag::intxor_tag)
      _INT_BINARY_FUNCTION(intxnor, tag::intxnor_tag)

      _INT_BINARY_FUNCTION(intadd, tag::intadd_tag)
      _INT_BINARY_FUNCTION(intmul, tag::intmul_tag)
      _INT_BINARY_FUNCTION(intsub, tag::intsub_tag)
      _INT_BINARY_FUNCTION(intudiv, tag::intudiv_tag)
      _INT_BINARY_FUNCTION(inturem, tag::inturem_tag)
      _INT_BINARY_FUNCTION(intsdiv, tag::intsdiv_tag)
      _INT_BINARY_FUNCTION(intsrem, tag::intsrem_tag)

      _INT_BINARY_FUNCTION(intcomp, tag::intcomp_tag)

      _INT_BINARY_FUNCTION(intslt, tag::intslt_tag)
      _INT_BINARY_FUNCTION(intsgt, tag::intsgt_tag)
      _INT_BINARY_FUNCTION(intsle, tag::intsle_tag)
      _INT_BINARY_FUNCTION(intsge, tag::intsge_tag)

      _INT_BINARY_FUNCTION(intult, tag::intult_tag)
      _INT_BINARY_FUNCTION(intugt, tag::intugt_tag)
      _INT_BINARY_FUNCTION(intule, tag::intule_tag)
      _INT_BINARY_FUNCTION(intuge, tag::intuge_tag)

      _INT_BINARY_FUNCTION(intshl,  tag::intshl_tag)
      _INT_BINARY_FUNCTION(intshr,  tag::intshr_tag)
      _INT_BINARY_FUNCTION(intashr, tag::intashr_tag)

      _INT_BINARY_FUNCTION(int_to_bv_tag, tag::int_to_bv_tag)

      /**@}*/

    } // namespace Array
  } // namepace logic
} // namespace metaSMT

//  vim: ft=cpp:ts=2:sw=2:expandtab
