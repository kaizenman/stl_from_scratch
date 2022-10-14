#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

template<typename T>
struct is_class : bool_constant<__is_class(T)> {};

template<typename T>
constexpr bool is_class_v = is_class<T>::value;

}