#pragma once

#include "../tags/String.hpp"
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
    namespace String{

      struct String_Grammar;

      // real Grammar
      struct String_Grammar
      : proto::and_<
	  proto::not_< proto::equal_to< proto::_, proto::_ > >
	, proto::or_<
	    proto::terminal< tag::string_var_tag >
	  , proto::unary_expr<tag::strlen_tag, String_Grammar>
	  , proto::nary_expr<tag::strconcat_tag, proto::vararg<proto::_> >
	> >
      {};

      template<typename Expr>
      struct String;

      struct String_Domain
      : proto::domain<proto::generator<String>, String_Grammar>
      {};

      template<typename Expr>
        struct String 
        : proto::extends<Expr, String<Expr>, String_Domain >
        {
          typedef proto::extends<Expr, String<Expr>, String_Domain > base_type;

          String(Expr const & expr = Expr())
            : base_type(expr)
          {}
        };

      template<typename Expr> 
      void check (String<Expr> const & ) {
        BOOST_MPL_ASSERT((proto::matches<Expr, String_Grammar>));
      }
      template<typename Expr> 
      void check_not (String<Expr> const & ) {
        BOOST_MPL_ASSERT_NOT((proto::matches<Expr, String_Grammar>));
      }

    /** 
     * @ingroup Frontend
     * @defgroup Array Array over bit-vectors Frontend
     * @{
     */


      template<typename E1>
      typename proto::result_of::make_expr< tag::strlen_tag, String_Domain, E1 const &>::type
      strlen( E1 const &e1) {
        return proto::make_expr< tag::strlen_tag, String_Domain >(boost::cref(e1));
      }

      template<typename E1, typename E2>
      typename proto::result_of::make_expr< tag::strconcat_tag, String_Domain,
          E1 const &, E2 const &>::type
      strconcat( E1 const &e1, E2 const &e2)
      {
        return proto::make_expr< tag::strconcat_tag, String_Domain >(boost::cref(e1), boost::cref(e2));
      }

      // constant creation
      typedef proto::result_of::make_expr< tag::ustring_tag, String_Domain
        , std::string
        , unsigned long
      > ::type string_result_type;

      inline string_result_type
      ustring( const std::string & value, unsigned long const & width )
      {
        return proto::make_expr< tag::ustring_tag, String_Domain>(value, width);
      } 
      
      typedef
      proto::result_of::make_expr< proto::tag::terminal, String_Domain
        , tag::string_var_tag
      > ::type string;

      inline string
      new_string( unsigned id,
                 unsigned width = 1 )
      {
        tag::string_var_tag tag;
        tag.id = impl::new_var_id();
        tag.width = width;
        return proto::make_expr< proto::tag::terminal, String_Domain >( tag );
      }

      inline std::size_t hash_value( string const &a ) {
        tag::string_var_tag const tag = boost::proto::value(a);
        std::size_t seed = 0;
        boost::hash_combine(seed, tag.id);
        return seed;
      }

      inline bool operator==( string const &lhs, string const &rhs ) {
	tag::string_var_tag const lhs_tag = proto::value(lhs);
	tag::string_var_tag const rhs_tag = proto::value(rhs);
	return boost::tie(lhs_tag.id, lhs_tag.width) ==
	  boost::tie(rhs_tag.id, rhs_tag.width);
      }

      /**@}*/

    } // namespace Array
  } // namepace logic
} // namespace metaSMT

//  vim: ft=cpp:ts=2:sw=2:expandtab
