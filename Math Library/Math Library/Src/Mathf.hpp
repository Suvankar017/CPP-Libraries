#pragma once

#ifndef MATHF_H
#define MATHF_H

#include <math.h>

namespace Alpha
{
	struct Mathf
	{

	private:
		Mathf();

	public:
		static const double Deg2Rad;
		static const double Epsilon;
		static const double Infinity;
		static const double NegativeInfinity;
		static const double PI;
		static const double Rad2Deg;

		static double Abs(double f);
		static double Acos(double f);
		static bool Approximately(double lhs, double rhs);
		static double Asin(double f);
		static double Atan(double f);
		static double Atan2(double y, double x);
		static double Ceil(double f);
		static long long int CeilToInt(double f);
		static double Clamp(double value, double min, double max);
		static double Clamp01(double value);
		static double ClosestPowerOfTwo(int value);
		static double Cos(double f);
		static double Exp(double power);
		static double Factorial(int value);
		static double Floor(double f);
		static long long int FloorToInt(double f);
		static double Fmod(double x, double y);
		static double InverseLerp(double a, double b, double value);
		static bool IsPowerOfTwo(int value);
		static double Lerp(double a, double b, double t);
		static double LerpUnclamped(double a, double b, double t);
		static double Log(double f);
		static double Log10(double f);
		static double Max(double lhs, double rhs);
		static double Min(double lhs, double rhs);
		static double MoveTowards(double current, double target, double maxDelta);
		static long long int NextPowerOfTwo(int value);
		static double Pow(double f, double p);
		static float FastInvSqrt(float f);
		static double Remap(double value, double fromA, double fromB, double toA, double toB);
		static double Round(double f);
		static long long int RoundToInt(double f);
		static double Sign(double f);
		static double Sin(double f);
		static double Sqrt(double f);
		static double Tan(double f);

	};
}

#endif // !MATHF_H
