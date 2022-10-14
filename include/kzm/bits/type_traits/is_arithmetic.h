#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/is_integral.h>
#include <kzm/bits/type_traits/is_floating_point.h>

namespace std
{

template<typename T>
struct is_arithmetic : bool_constant<is_integral_v<T> || is_arithmetic_v<T>> {};

template<typename T>
constexpr bool is_arithmetic_v = is_arithmetic::value;

}