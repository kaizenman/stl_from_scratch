#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/is_same.h>
#include <kzm/bits/type_traits/conditional.h>

namespace kzm
{

template<typename T, typename... Ts>
struct conjuction_impl {
    using type = conditional<!(bool)T::value, T, typename conjuction_impl<Ts..>::type>;
};

template<typename T>
struct conjuction_impl<T> {
    using type = T;
};

template<typename... T>
struct conjuction : conjuction_impl<true_type, conjuction_impl<T...>>::type {};

template<typename... T>
constexpr bool conjuction_v = conjuction<T...>::value;

}