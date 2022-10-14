#pragma once

namespace kzm
{

#if __has_builtin(__add_rvalue_reference)
template<typename T>
using add_rvalue_reference_t = __add_rvalue_reference(T);
#else

template<typename T, bool>
struct add_rvalue_reference_impl {
    using type = T;
};

template<typename T>
struct add_rvalue_reference_impl<T, true>
{
    using type = T&&;
};

template<typename T>
using add_rvalue_reference_t = typename add_rvalue_reference_impl<T>::value;

#endif // __has_builtin(__add_rvalue_reference)

template<typename T>
struct add_rvalue_reference {
    using type = add_rvalue_reference_t<T>;
};

}