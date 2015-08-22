/*
@copyright Louis Dionne 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/assert.hpp>
#include <boost/hana/config.hpp>
#include <boost/hana/core/is_a.hpp>
#include <boost/hana/integral_constant.hpp>
#include <boost/hana/length.hpp>
#include <boost/hana/string.hpp>
namespace hana = boost::hana;
using namespace hana::literals;


// By default, this is disabled
#ifdef BOOST_HANA_CONFIG_ENABLE_STRING_UDL

    constexpr auto str = "Hello world!"_s;
    BOOST_HANA_CONSTANT_CHECK(str == hana::string<'H', 'e', 'l', 'l', 'o', ' ',
                                                  'w', 'o', 'r', 'l', 'd', '!'>);

    BOOST_HANA_CONSTANT_CHECK(hana::is_a<hana::String>(str));
    BOOST_HANA_CONSTANT_CHECK(hana::length(str) == hana::size_t<12>);

#endif

int main() { }