#include <cstdint>

constexpr uint64_t widen1(size_t a)
{
	// warning C26472: Don't use a static_cast for arithmetic conversions. Use brace initialization, gsl::narrow_cast or gsl::narrow (type.1).
	return static_cast<uint64_t>(a);
}

constexpr uint64_t widen2(size_t a)
{
	// warning C26493: Don't use C-style casts (type.4).
	return uint64_t{ a };
}

int main()
{
	widen1(123);
	widen2(123);
	return 0;
}
