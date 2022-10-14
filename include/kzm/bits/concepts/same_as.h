#pragma once

#include <kzm/bits/type_traits/same_as.h>

namespace kzm
{

namespace detail
{

template<typename T, typename U>
constexpr bool same_as_impl = is_same_v<T, U>;

}

// [concept.same]

template<typename T, typename U>
concept same_as = detail::same_as_impl<T, U> && detail::same_as_impl<U, T>;

}