#pragma once
#include <fstream> // for std::fpos_t 
#include <cmath> // for pow

namespace DataLiterals {
	typedef std::fpos_t DataType;

	// Kilobytes
	constexpr DataType operator""kb(const unsigned long long x)
	{
		return 1024 * x;
	}

	// Megabytes
	constexpr DataType operator""mb(const unsigned long long x)
	{
		return pow(1024, 2) * x;
	}

	// Gigabytes
	constexpr DataType operator""gb(const unsigned long long x)
	{
		return pow(1024, 3) * x;
	}

	// Terabytes
	constexpr DataType operator""tb(const unsigned long long x)
	{
		return pow(1024, 4) * x;
	}

	// Petabytes
	constexpr DataType operator""pb(const unsigned long long x)
	{
		return pow(1024, 5) * x;
	}

	// Exabytes
	constexpr DataType operator""eb(const unsigned long long x)
	{
		return pow(1024, 6) * x;
	}
}
