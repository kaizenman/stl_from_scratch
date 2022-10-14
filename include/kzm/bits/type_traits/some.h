#pragma once

#include <kzm/bits/type_traits/disjunction.h>

namespace kzm
{

    template<typename T, typename... Ts>
    constexpr bool some = disjuction<is_same_v<T, Ts>...>;

}