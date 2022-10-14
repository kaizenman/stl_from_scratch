#pragma once

#include <kzm/bits/type_traits/is_convertible_to.h>
#include <kzm/bits/utility/declval.h>

namespace kzm
{


// [concept.convertible]

template<typename From, typename To>
concept convertible_to = is_convertible_v<From, To> && requires {
    static_cast<To>(kzm::declval<From>());
};


}