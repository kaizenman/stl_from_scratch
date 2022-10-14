#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

template<typename T, typename U>
struct is_same : bool_constant<__is_same(_T, U)>{};

template<typename T, typename U>
constexpr bool is_same_v = __is_same(T, U);


}