export module student_1bib21094.Lab2.Variant21.Task4:f4;

#include <cmath>;

import :a;

namespace RBPO::Lab2::Variant21::Task4 {
	export double function4(double e) {
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
}