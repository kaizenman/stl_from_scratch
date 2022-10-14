#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

template<typename T>
struct is_union : bool_constant<__is_union(T)> {};

template<typename T>
constexpr bool is_union_v = is_union<T>::value;

}