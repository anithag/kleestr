#pragma once
#ifndef HEADER_metaSMT_TAG_STRING_HPP
#define HEADER_metaSMT_TAG_STRING_HPP

#include "Logic.hpp"

#include <boost/mpl/vector.hpp>
#include <boost/variant.hpp>

namespace metaSMT {
  namespace logic {
    namespace String {
      namespace tag {

#define PRINT(Tag, body) template<typename STREAM> \
  friend STREAM & operator<< (STREAM & out, Tag const & self) \
  { return (out << body); }
#define TAG( NAME, ATTR ) struct NAME##_tag { \
  typedef attr::ATTR attribute; \
  bool operator<(NAME##_tag const &) const {return false;} \
  PRINT(NAME##_tag, #NAME) \
};

        // string variable tag
        struct string_var_tag {
          typedef attr::ignore attribute;

          unsigned id;
          unsigned width;
          PRINT(string_var_tag, "string_var_tag[" << self.id  << ',' << self.width << "]")
          bool operator< (string_var_tag const & other) const {
            return id < other.id;
          }
        };

        TAG(strconcat, nary)
        TAG(strlen, unary)

#undef PRINT
#undef TAG

        typedef boost::mpl::vector<
          nil
        , strconcat_tag
        , strlen_tag
        , string_var_tag
        >::type String_Tags;

        typedef boost::make_variant_over<String_Tags>::type String_Tag;

      } // namespace metaSMT::logic::String::tag
    } // namespace metaSMT::logic::String
  } // namespace metaSMT::logic
} // namespace metaSMT
#endif // HEADER_metaSMT_TAG_STRING_HPP
