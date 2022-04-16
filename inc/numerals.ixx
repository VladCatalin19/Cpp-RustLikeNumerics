
namespace rust
{
    constexpr u8 operator"" _u8(unsigned long long value) noexcept
    {
        return u8(static_cast<std::uint8_t>(value));
    }

    constexpr u16 operator"" _u16(unsigned long long value) noexcept
    {
        return u16(static_cast<std::uint16_t>(value));
    }

    constexpr u32 operator"" _u32(unsigned long long value) noexcept
    {
        return u32(static_cast<std::uint32_t>(value));
    }

    constexpr u64 operator"" _u64(unsigned long long value) noexcept
    {
        return u64(static_cast<std::uint64_t>(value));
    }


    constexpr i8 operator"" _i8(unsigned long long value) noexcept
    {
        return i8(static_cast<std::int8_t>(value));
    }

    constexpr i16 operator"" _i16(unsigned long long value) noexcept
    {
        return i16(static_cast<std::int16_t>(value));
    }

    constexpr i32 operator"" _i32(unsigned long long value) noexcept
    {
        return i32(static_cast<std::int32_t>(value));
    }

    constexpr i64 operator"" _i64(unsigned long long value) noexcept
    {
        return i64(static_cast<std::int64_t>(value));
    }
}
