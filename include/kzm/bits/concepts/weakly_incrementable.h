#pragma once

#include <kzm/bits/concepts/same_as.h>

namespace kzm
{

template<typename It>
concept weakly_incrementable = requires(It it) {
    { ++it } -> same_as<It&>;
};

// semiregular

}