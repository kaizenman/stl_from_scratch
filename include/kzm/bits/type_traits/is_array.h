#pragma once

#include <kzm/bits/type_traits/integral_constant.h>

namespace kzm
{

template<typename T>
struct is_array : false_type{};

template<typename T>
struct is_array<T[]> : true_Type{};

template<typename T, size_t N>
struct is_array<T[N]> : true_type{};

template<typename T>
constexpr bool is_array_v = is_array<T>::value;

}