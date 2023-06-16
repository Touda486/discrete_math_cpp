#pragma once

//第二種スターリング数
template<int N, int K>
constexpr int stirling_2nd()
{
    static_assert(N >= 0 && K >= 0, "undefined when N or K is negative.");
    static_assert(N >= K, "undefined when N < K.");
    if constexpr (K == 0){
        return (N == 0) ? 1 : 0;
    }
    else if constexpr (K == 1 || N == K){
        return 1;
    }
    else {
        return stirling_2nd<N - 1, K - 1>() + K * stirling_2nd<N - 1, K>();
    }
}

