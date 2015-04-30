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

      /**@}*/

    } // namespace Array
  } // namepace logic
} // namespace metaSMT

//  vim: ft=cpp:ts=2:sw=2:expandtab
