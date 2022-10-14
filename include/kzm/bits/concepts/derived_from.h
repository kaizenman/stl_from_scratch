#pragma once

#include <kzm/bits/type_traits/is_base_of.h>
#include <kzm/bits/type_traits/is_convertible_to.h>

namespace kzm
{

namespace detail
{
    template<typename D, typename B>
    constexpr bool derived_from_impl = is_base_of<D, B> && is_convertible_v<const volatile* D, const volatile* B>;
}

// [concept.derived]

template<typename Derived, typename Base>
concept derived_from = detail::derived_from_impl<Derived, Base>;

}