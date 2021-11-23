#include "Mathf.hpp"

namespace Alpha
{
	const double Mathf::Deg2Rad = Mathf::PI / 180.0;
	const double Mathf::Epsilon = 1e-09;
	const double Mathf::Infinity = (1e+300 * 1e+300);
	const double Mathf::NegativeInfinity = -Mathf::Infinity;
	const double Mathf::PI = 3.14159265358979;
	const double Mathf::Rad2Deg = 180.0 / Mathf::PI;

	double Mathf::Abs(double f)
	{
		return (f < 0.0) ? -f : f;
	}

	double Mathf::Acos(double f)
	{
		return acos(f);
	}

	bool Mathf::Approximately(double lhs, double rhs)
	{
		return Abs(lhs - rhs) < Epsilon;
	}

	double Mathf::Asin(double f)
	{
		return asin(f);
	}

	double Mathf::Atan(double f)
	{
		return atan(f);
	}

	double Mathf::Atan2(double y, double x)
	{
		return atan2(y, x);
	}

	double Mathf::Ceil(double f)
	{
		return ceil(f);
	}

	long long int Mathf::CeilToInt(double f)
	{
		return (long long int)ceil(f);
	}

	double Mathf::Clamp(double value, double min, double max)
	{
		return Max(min, Min(value, max));
	}

	double Mathf::Clamp01(double value)
	{
		return Clamp(value, 0.0, 1.0);
	}

	double Mathf::ClosestPowerOfTwo(int value)
	{
		return 0.0;
	}

	double Mathf::Cos(double f)
	{
		return cos(f);
	}

	double Mathf::Exp(double power)
	{
		return exp(power);
	}

	double Mathf::Factorial(int value)
	{
		double res = 1.0;
		while (value > 1)
		{
			res *= value--;
		}
		return res;
	}

	double Mathf::Floor(double f)
	{
		return floor(f);
	}

	long long int Mathf::FloorToInt(double f)
	{
		return (long long int)floor(f);
	}

	double Mathf::Fmod(double x, double y)
	{
		double frac = x / y;
		long long int floor = frac > 0 ? (long long int)frac : (long long int)(frac - 0.9999999999999999);
		return (x - y * floor);
	}

	double Mathf::InverseLerp(double a, double b, double value)
	{
		return (value - a) / (b - a);
	}

	bool Mathf::IsPowerOfTwo(int value)
	{
		return (value & (value - 1)) == 0;
	}

	double Mathf::Lerp(double a, double b, double t)
	{
		return LerpUnclamped(a, b, Clamp01(t));
	}

	double Mathf::LerpUnclamped(double a, double b, double t)
	{
		return a + (b - a) * t;
	}

	double Mathf::Log(double f)
	{
		return log(f);
	}

	double Mathf::Log10(double f)
	{
		return log10(f);
	}

	double Mathf::Max(double lhs, double rhs)
	{
		return (lhs > rhs) ? lhs : rhs;
	}

	double Mathf::Min(double lhs, double rhs)
	{
		return (lhs < rhs) ? lhs : rhs;
	}

	double Mathf::MoveTowards(double current, double target, double maxDelta)
	{
		if (Abs(target - current) <= maxDelta) return target;
		return current + Sign(target - current) * maxDelta;
	}

	long long int Mathf::NextPowerOfTwo(int value)
	{
		return 0;
	}

	double Mathf::Pow(double f, double p)
	{
		return pow(f, p);
	}

	float Mathf::FastInvSqrt(float f)
	{
		long i;
		float x2, y;
		const float threehalfs = 1.5F;

		x2 = f * 0.5F;
		y = f;
		i = *(long*)&y;							// evil floating point bit level hacking
		i = 0x5f3759df - (i >> 1);				// what the fuck? 
		y = *(float*)&i;
		y = y * (threehalfs - (x2 * y * y));	// 1st iteration
		y = y * (threehalfs - (x2 * y * y));	// 2nd iteration, this can be removed
		y = y * (threehalfs - (x2 * y * y));	// 2nd iteration, this can be removed

		return y;
	}

	double Mathf::Remap(double value, double fromA, double fromB, double toA, double toB)
	{
		return toA + (toB - toA) * (value - fromA) / (fromB - fromA);
	}

	double Mathf::Round(double f)
	{
		return round(f);
	}

	long long int Mathf::RoundToInt(double f)
	{
		return (int)round(f);
	}

	double Mathf::Sign(double f)
	{
		return (f < 0.0) ? -1.0 : 1.0;
	}

	double Mathf::Sin(double f)
	{
		return sin(f);
	}

	double Mathf::Sqrt(double f)
	{
		return sqrt(f);
	}

	double Mathf::Tan(double f)
	{
		return tan(f);
	}

}