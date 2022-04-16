
namespace rust
{
    template<typename t_internal>
    constexpr t_generic<t_internal>::t_generic(const t_internal value) noexcept
        : m_internal_value(value)
    {

    }

    template<typename t_internal>
    constexpr t_internal t_generic<t_internal>::internal() const
    {
        return m_internal_value;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>::t_generic(const t_generic<t_internal> &other) noexcept
        : m_internal_value(static_cast<t_internal>(other.m_internal_value))
    {

    }

    template<typename t_internal>
    constexpr t_generic<t_internal>::t_generic(t_generic<t_internal> &&other) noexcept
        : m_internal_value(static_cast<t_internal>(other.m_internal_value))
    {
        
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value = other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator=(t_generic<t_internal> &&other) noexcept
    {
        m_internal_value = other.m_internal_value;
        other.m_internal_value = 0;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator+=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value += other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator-=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value -= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator*=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value *= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator/=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value /= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator&=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value &= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator|=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value |= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator^=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value ^= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator<<=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value <<= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator>>=(const t_generic<t_internal> &other) noexcept
    {
        m_internal_value >>= other.m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator+() noexcept
    {
        return t_generic<t_internal>(+m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator-() noexcept
    {
        return t_generic<t_internal>(-m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator++() noexcept
    {
        ++m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator++(int) noexcept
    {
        m_internal_value++;
        return t_generic<t_internal>(*this);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal>& t_generic<t_internal>::operator--() noexcept
    {
        --m_internal_value;
        return *this;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator--(int) noexcept
    {
        m_internal_value--;
        return t_generic<t_internal>(*this);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator+(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value + other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator-(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value - other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator*(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value * other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator/(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value / other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator%(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value % other.m_internal_value);
    }

    template<typename t_internal>
    constexpr bool t_generic<t_internal>::operator==(const t_generic<t_internal> &other) noexcept
    {
        return m_internal_value == other.m_internal_value;
    }

    template<typename t_internal>
    constexpr bool t_generic<t_internal>::operator!=(const t_generic<t_internal> &other) noexcept
    {
        return m_internal_value != other.m_internal_value;
    }

    template<typename t_internal>
    constexpr bool t_generic<t_internal>::operator>(const t_generic<t_internal> &other) noexcept
    {
        return m_internal_value > other.m_internal_value;
    }

    template<typename t_internal>
    constexpr bool t_generic<t_internal>::operator<(const t_generic<t_internal> &other) noexcept
    {
        return m_internal_value < other.m_internal_value;
    }

    template<typename t_internal>
    constexpr bool t_generic<t_internal>::operator>=(const t_generic<t_internal> &other) noexcept
    {
        return m_internal_value >= other.m_internal_value;
    }

    template<typename t_internal>
    constexpr bool t_generic<t_internal>::operator<=(const t_generic<t_internal> &other) noexcept
    {
        return m_internal_value <= other.m_internal_value;
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator~() noexcept
    {
        return t_generic<t_internal>(~m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator|(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value | other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator&(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value & other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator^(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value ^ other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator<<(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value << other.m_internal_value);
    }

    template<typename t_internal>
    constexpr t_generic<t_internal> t_generic<t_internal>::operator>>(const t_generic<t_internal> &other) noexcept
    {
        return t_generic<t_internal>(m_internal_value >> other.m_internal_value);
    }

    template<typename t_internal>
    template<typename t_other_internal>
    constexpr t_generic<t_internal>::operator t_generic<t_other_internal>()
    {
        return t_generic<t_other_internal>(static_cast<t_other_internal>(m_internal_value));
    }
}