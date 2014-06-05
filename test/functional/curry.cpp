/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/functional.hpp>

#include <boost/hana/detail/static_assert.hpp>
#include <boost/hana/integral.hpp>
#include <boost/hana/list.hpp>
using namespace boost::hana;


int main() {
    BOOST_HANA_STATIC_ASSERT(curry<0>(list)() == list());

    BOOST_HANA_STATIC_ASSERT(curry<1>(list)(int_<0>) == list_c<int, 0>);
    BOOST_HANA_STATIC_ASSERT(curry<1>(list)()(int_<0>) == list_c<int, 0>);

    BOOST_HANA_STATIC_ASSERT(curry<2>(list)(int_<0>, int_<1>) == list_c<int, 0, 1>);
    BOOST_HANA_STATIC_ASSERT(curry<2>(list)(int_<0>)(int_<1>) == list_c<int, 0, 1>);
    BOOST_HANA_STATIC_ASSERT(curry<2>(list)()(int_<0>, int_<1>) == list_c<int, 0, 1>);

    BOOST_HANA_STATIC_ASSERT(curry<3>(list)(int_<0>, int_<1>, int_<2>) == list_c<int, 0, 1, 2>);
    BOOST_HANA_STATIC_ASSERT(curry<3>(list)(int_<0>, int_<1>)(int_<2>) == list_c<int, 0, 1, 2>);
    BOOST_HANA_STATIC_ASSERT(curry<3>(list)(int_<0>)(int_<1>, int_<2>) == list_c<int, 0, 1, 2>);
    BOOST_HANA_STATIC_ASSERT(curry<3>(list)()(int_<0>, int_<1>, int_<2>) == list_c<int, 0, 1, 2>);
    BOOST_HANA_STATIC_ASSERT(curry<3>(list)(int_<0>)(int_<1>)(int_<2>) == list_c<int, 0, 1, 2>);
    BOOST_HANA_STATIC_ASSERT(curry<3>(list)(int_<0>)()(int_<1>, int_<2>) == list_c<int, 0, 1, 2>);
}