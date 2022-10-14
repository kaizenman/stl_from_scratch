#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/conjuction.h>
#include <kzm/bits/type_traits/some.h>

namespace kzm
{

template<typename T>
constexpr bool is_integral_impl = some<T, bool, char, char8_t, char16_t, char32_t, wchar_t, short, int, long, long long>; 

template<typename T>
struct is_integral : bool_constant<is_integral_impl<T>> {};

}