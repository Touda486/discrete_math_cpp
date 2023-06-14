#pragma once

#include "factorial.hpp"

// 順列 nHr
template<int N, int R>
constexpr int permutation()
{
    static_assert(N >= R, "nHr is undefined when n < r.");
    return factorial<N>() / factorial<N - R>();
}

// 組み合わせ nCr (二項係数)
template<int N, int R>
constexpr int combination()
{
    static_assert(N >= R, "nCr is undefined when n < r.");
    return factorial<N>() / (factorial<N - R>() * factorial<R>());
}

// 重複組み合わせ nHr
template<int N, int R>
constexpr int combination_rep()
{
    return combination<N + R - 1, R>();
}
