#ifndef RUST_LIKE_NUMERALS_SRC_NUMERALS_NUMERALS_HPP_INCLUDED
#define RUST_LIKE_NUMERALS_SRC_NUMERALS_NUMERALS_HPP_INCLUDED

#include "t_generic.hxx"

#include <cstdint>

namespace rust
{
    using u8 = t_generic<std::uint8_t>;
    using u16 = t_generic<std::uint16_t>;
    using u32 = t_generic<std::uint32_t>;
    using u64 = t_generic<std::uint64_t>;

    using i8 = t_generic<std::int8_t>;
    using i16 = t_generic<std::int16_t>;
    using i32 = t_generic<std::int32_t>;
    using i64 = t_generic<std::int64_t>;

    constexpr u8 operator"" _u8(unsigned long long value) noexcept;
    constexpr u16 operator"" _u16(unsigned long long value) noexcept;
    constexpr u32 operator"" _u32(unsigned long long value) noexcept;
    constexpr u64 operator"" _u64(unsigned long long value) noexcept;

    constexpr i8 operator"" _i8(unsigned long long value) noexcept;
    constexpr i16 operator"" _i16(unsigned long long value) noexcept;
    constexpr i32 operator"" _i32(unsigned long long value) noexcept;
    constexpr i64 operator"" _i64(unsigned long long value) noexcept;
}

#include "numerals.ixx"

#endif // RUST_LIKE_NUMERALS_SRC_NUMERALS_NUMERALS_HPP_INCLUDED
