#pragma once

//u - unsigned
//a - arg
//w - wide
//c - const
namespace wear {
#define NULL 0

	typedef char int8;
	typedef short int16;
	typedef int int32;
	typedef long long int64;
	typedef unsigned char byte, uchar, uint8;
	typedef unsigned short ushort, uint16;
	typedef unsigned int uint, uint32;
	typedef unsigned long ulong;
	typedef unsigned long long uint64;
	typedef wchar_t wchar;
	typedef char16_t char16;
	typedef char32_t char32;
	typedef char* str;
	typedef wchar_t* wcs;

	typedef const char& aint8;
	typedef const short& aint16;
	typedef const int& aint32;
	typedef const long long& aint64;
	typedef const unsigned char &abyte, &auchar, &auint8;
	typedef const unsigned short &aushort, &auint16;
	typedef const unsigned int &auint, &auint32;
	typedef const unsigned long& aulong;
	typedef const unsigned long long& auint64;
	typedef const wchar_t& awchar;
	typedef const char16_t& achar16;
	typedef const char32_t& achar32;
	typedef const char *cstr, *astr, *acstr;
	typedef const wchar_t *cwcs, *awcs, *acwcs;

	typedef const bool& abool;
}; // namespace wear