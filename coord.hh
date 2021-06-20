#pragma once
#include <type_traits>
namespace wear {
	template < class T > struct coord {
		static_assert (std::is_integral< T >::value, "[COORD] params not number");
		T x = 0, y = 0;
		coord (T _x, T _y)
		{
			x = _x;
			y = _y;
		}
	};
} // namespace wear
