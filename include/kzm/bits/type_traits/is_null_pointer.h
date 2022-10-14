#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/is_same.h>
#include <kzm/bits/type_traits/remove_cv.h>
#include <kzm/bits/cstddef/nullptr_t.h>

namespace kzm
{

template<typename T>
struct is_null_pointer : bool_constant<is_same_v<remove_cv_t<T>, nullptr_t>> {};

template<typename T>
constexpr bool is_null_pointer_v = is_null_pointer<T>::value;

}