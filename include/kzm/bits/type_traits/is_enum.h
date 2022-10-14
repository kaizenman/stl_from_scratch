#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

template<typename T>
struct is_enum : bool_constant<__is_enum(T)>{};

template<typename T>
constexpr bool is_enum_v = is_enum<T>::value;

}