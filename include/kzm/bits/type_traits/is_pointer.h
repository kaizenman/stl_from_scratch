#pragma once

namespace kzm
{

template<typename T>
struct is_pointer : std::false_type {};

template<typename T>
struct is_pointer<T*> : std::true_type {};

template<typename T>
struct is_pointer<T* const> : std::true_type {};

template<typename T>
struct is_pointer<T* volatile> : std::true_type {};

template<typename T>
struct is_pointer<T* const volatile> : std::true_type {};


template<typename T>
constexpr bool is_pointer_v = is_pointer<T>::value;

}