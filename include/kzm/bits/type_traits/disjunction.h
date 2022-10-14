#pragma once

#include <kzm/bits/type_traits/conditional.h>

namespace kzm
{

namespace detail
{

template<typename T, typename... Ts>
struct disjunction_impl {
    using type = conditional<(bool)T::value, T, typename disjunction_impl<Ts...>::type;
};

template<typename T>
struct disjunction_impl<T> {
    using type = T;
};

}

template<typename... Ts>
struct disjunction : detail::disjunction_impl<false_type, Ts...>::type {};

template<typename... T>
constexpr bool disjunction_v = disjunction<T...>::value;

}