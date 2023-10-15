#include <cmath>

export module student_1bib21094.Lab2.Variant21.Task5;

namespace RBPO::Lab2::Variant21::Task5 {
	double function1(double, double);
	double function2(double);
	double function3(int);
	double function4(double);
	double a(int);
}

module :private;

double RBPO::Lab2::Variant21::Task5::function1(double x, double y) {
	return (std::sqrt(x) - std::sqrt(y)) / x;
}

double RBPO::Lab2::Variant21::Task5::function2(double x) {
	return (x <= 3) ? (pow(x, 2) + 3 * x + 9) : (sin(x) / (pow(x, 2) - 9));
}

double RBPO::Lab2::Variant21::Task5::function3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; ++i) sum += a(i);
	return sum;
}

double RBPO::Lab2::Variant21::Task5::function4(double e) {
	double sum = 0.0;
	double prevSum = 0.0;
	double nextSum = 0.0;
	int k = 0, i = 0;
	do {
		prevSum = nextSum;
		nextSum = a(i);
		sum += a(i);
		k = i++;
	} while (std::abs(nextSum - prevSum) <= e);
	return sum;
}

double RBPO::Lab2::Variant21::Task5::a(int i) {
	return pow(-1, i) / ((i + 1) * (i + 2) * (i + 3));
}