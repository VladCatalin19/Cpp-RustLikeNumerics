#ifndef RUST_LIKE_NUMERALS_SRC_NUMERALS_T_GENERIC_HPP_INCLUDED
#define RUST_LIKE_NUMERALS_SRC_NUMERALS_T_GENERIC_HPP_INCLUDED

#include <type_traits>          // std::is_integral, std::is_floating_point

namespace rust
{
    template<typename t_internal>
    class t_generic
    {
        static_assert(std::is_integral<t_internal>::value, "Class supports only integral internal types");
    private:
        t_internal m_internal_value;

    public:
        constexpr t_generic(const t_internal value) noexcept;
        ~t_generic() noexcept = default;

        constexpr t_internal internal() const;

        constexpr t_generic(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic(t_generic<t_internal> &&other) noexcept;

        constexpr t_generic<t_internal>& operator=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator=(t_generic<t_internal> &&other) noexcept;

        constexpr t_generic<t_internal>& operator+=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator-=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator*=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator/=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator&=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator|=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator^=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator<<=(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal>& operator>>=(const t_generic<t_internal> &other) noexcept;

        constexpr t_generic<t_internal> operator+() noexcept;
        constexpr t_generic<t_internal> operator-() noexcept;

        constexpr t_generic<t_internal>& operator++() noexcept;
        constexpr t_generic<t_internal> operator++(int) noexcept;

        constexpr t_generic<t_internal>& operator--() noexcept;
        constexpr t_generic<t_internal> operator--(int) noexcept;

        constexpr t_generic<t_internal> operator+(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator-(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator*(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator/(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator%(const t_generic<t_internal> &other) noexcept;

        constexpr bool operator==(const t_generic<t_internal> &other) noexcept;
        constexpr bool operator!=(const t_generic<t_internal> &other) noexcept;
        constexpr bool operator>(const t_generic<t_internal> &other) noexcept;
        constexpr bool operator<(const t_generic<t_internal> &other) noexcept;
        constexpr bool operator>=(const t_generic<t_internal> &other) noexcept;
        constexpr bool operator<=(const t_generic<t_internal> &other) noexcept;

        constexpr t_generic<t_internal> operator~() noexcept;
        constexpr t_generic<t_internal> operator|(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator&(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator^(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator<<(const t_generic<t_internal> &other) noexcept;
        constexpr t_generic<t_internal> operator>>(const t_generic<t_internal> &other) noexcept;

        template<typename t_other_internal>
        explicit constexpr operator t_generic<t_other_internal>();
    };
}

#include "t_generic.ixx"

#endif // RUST_LIKE_NUMERALS_SRC_NUMERALS_T_GENERIC_HPP_INCLUDED
