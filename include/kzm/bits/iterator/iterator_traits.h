#pragma once

#include <kzm/bits/concepts/same_as.h>

namespace kzm
{

template<typename T>
using with_reference = T&;

template<typename T>
concept can_reference = requires {
    typename with_reference<T>
};

namespace detail
{

template<typename It>
concept iterator = requires(It it) {
    { *it } -> can_reference;
    { ++it } -> same_as<It&>;
}

}



template<typename It>
struct iterator_traits : detail::iterator_traits_impl<T> {};

}