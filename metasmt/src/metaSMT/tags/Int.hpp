#pragma once
#ifndef HEADER_metaSMT_TAG_INT_HPP
#define HEADER_metaSMT_TAG_INT_HPP

#include "Logic.hpp"

#include <boost/mpl/vector.hpp>
#include <boost/variant.hpp>

namespace metaSMT {
  namespace logic {
    namespace Int {
      namespace tag {

#define PRINT(Tag, body) template<typename STREAM> \
  friend STREAM & operator<< (STREAM & out, Tag const & self) \
  { return (out << body); }

#define TAG( NAME, ATTR ) struct NAME##_tag { \
  typedef attr::ATTR attribute; \
  bool operator<(NAME##_tag const &) const {return false;} \
  PRINT(NAME##_tag, #NAME) \
};

        // Int variable tag
        struct int_var_tag {
          typedef attr::ignore attribute;

          unsigned id;
          unsigned width;
          PRINT(int_var_tag, "int_var_tag[" << self.id  << ',' << self.width << "]")
          bool operator< (int_var_tag const & other) const {
            return id < other.id;
          }
        };

	TAG(uint, nary)

        // bitwise binary
        TAG(intand, binary)
        TAG(intnand, binary)
        TAG(intor, binary)
        TAG(intnor, binary)
        TAG(intxor, binary)
        TAG(intxnor, binary)


        TAG(intcomp, binary)

        // bitvec arithmetic
        TAG(intadd, binary)
        TAG(intmul, binary)
        TAG(intsub, binary)
        TAG(intsdiv, binary)
        TAG(intsrem, binary)
        TAG(intudiv, binary)
        TAG(inturem, binary)

        // bitvector shifting
        TAG(intshl, binary)
        TAG(intshr, binary)
        TAG(intashr, binary)

        // comparison operators
        TAG(intslt, binary)
        TAG(intsgt, binary)
        TAG(intsle, binary)
        TAG(intsge, binary)
        TAG(intult, binary)
        TAG(intugt, binary)
        TAG(intule, binary)
        TAG(intuge, binary)

#undef PRINT
#undef TAG

        typedef boost::mpl::vector<
          nil
	, uint_tag
        , int_var_tag
        >::type Int_Tags;

        typedef boost::make_variant_over<Int_Tags>::type Int_Tag;

      } // namespace metaSMT::logic::String::tag
    } // namespace metaSMT::logic::String
  } // namespace metaSMT::logic
} // namespace metaSMT
#endif // HEADER_metaSMT_TAG_STRING_HPP