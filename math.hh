#pragma once
#include <type_traits>
#define _MATH_HH


namespace wear {
	template <class T1, class T2, class T3> T1 clamp (T1 value, T2 val1, T3 val2)
	{
		static_assert (std::is_integral< T1 >::value || std::is_integral< T2 >::value || std::is_integral< T3 >::value);
		return (value > val2) ? val2 : (value < val1) ? val1 : value;
	}
}