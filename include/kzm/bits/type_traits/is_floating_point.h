#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/remove_cv.h>

namespace kzm
{

template<typename T>
struct is_floating_point : bool_constant<some<remove_cv<T>, float, double, long double>> {};

}