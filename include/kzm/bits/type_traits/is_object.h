#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/is_scalar.h>
#include <kzm/bits/type_traits/is_union.h>
#include <kzm/bits/type_traits/is_array.h>
#include <kzm/bits/type_traits/is_class.h>

namespace kzm
{

template<typename T>
struct is_object : bool_constant<is_scalar_v<T> || is_array_v<T> || is_union_v<T> || is_class_v<T>> {};

}