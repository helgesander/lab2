module;
export module student_1bib21094.Lab2.Variant21.Task4:f2;

#include <cmath>

namespace RBPO::Lab2::Variant21::Task4 {
	export double function2(double x) {
		return (x <= 3) ? (pow(x, 2) + 3 * x + 9) : (sin(x) / (pow(x, 2) - 9));
	}
}

