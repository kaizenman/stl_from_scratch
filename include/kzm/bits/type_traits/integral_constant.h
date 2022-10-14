#pragma once

namespace kzm
{

template<typename T, T V>
struct integral_constant {
    using type = integral_constant;
    using value_type = T;

    static constexpr Type value = V;

    constexpr operator value_type() const noexcept { return V; }
    constexpr value_type operator()() const noexcept { return V; }
};

template<bool B>
using bool_constant = integral_constant<bool, B>;

using true_type = bool_constant<true>;
using false_type = bool_constant<false>;

template<size_t I>
using index_constant = integral_constant<size_t, I>;

}