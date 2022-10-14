#pragma once

#include <kzm/bits/type_traits/integral_constant.h>
#include <kzm/bits/type_traits/some.h>
#include <kzm/bits/type_traits/is_arithmetic.h>
#include <kzm/bits/type_traits/is_enum.h>
#include <kzm/bits/type_traits/is_pointer.h>
#include <kzm/bits/type_traits/is_member_pointer.h>
#include <kzm/bits/type_traits/is_null_pointer.h>

namespace kzm
{

template<typename T>
struct is_scalar : bool_constant<some<
      is_arithmetic_v<T>
    , is_enum_v<T>
    , is_pointer_v<T>
    , is_member_pointer_v<T>
    , is_null_pointer_v<T>
    >
>{};

}