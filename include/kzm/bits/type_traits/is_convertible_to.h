#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

#if __has_builtin(__is_convertible_to)
template<typename T1, typename T2>
struct is_convertible : bool_constant<__is_convertible_to(T1, T2)>{};

template<typename T1, typename T2>
constexpr bool is_convertible_v = is_convertible<T1, T2>;

#endif

}