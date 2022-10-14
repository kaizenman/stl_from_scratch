#pragma once

namespace kzm
{

/*
    Determines the common reference type of the types T..., 
    that is, the type to which all the types in T... can be converted or bound. 
    If such a type exists (as determined according to the rules below), 
    the member type names that type. 
    Otherwise, there is no member type. 
    The behavior is undefined if any of the types in T... is an incomplete type other than (possibly cv-qualified) void.
*/
template<typename... T>
struct common_reference;



}