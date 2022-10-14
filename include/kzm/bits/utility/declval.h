#pragma once

#include <bits/type_traits/add_rvalue_reference.h>

namespace kzm
{
    template<typename T> auto declval() noexcept -> add_rvalue_reference_t<T>;
}