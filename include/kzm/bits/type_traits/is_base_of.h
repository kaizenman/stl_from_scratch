#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

template<typename B, typename D>
struct is_base_of : bool_constant<__is_base_of(B, D)> {};

template<typename B, typename D>
constexpr bool is_base_of_v = __is_base_of(B, D);

}
