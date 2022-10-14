#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/is_same.h>
#include <kzm/bits/type_traits/remove_cv.h>
#include <kzm/bits/cstddef/nullptr_t.h>

namespace kzm
{

namespace detail
{

template<typename T>
struct is_member_pointer_helper : std::false_type{};

template<typename T, typename U>
struct is_member_pointer_helper<T U::*> : std::true_type{};

}

template<typename T>
struct is_member_pointer : is_member_pointer_helper<remove_cv_t<T>>{};

template<typename T>
constexpr bool is_member_pointer_v = is_member_pointer<T>::value;

}