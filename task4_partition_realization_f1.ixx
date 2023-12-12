module;

#include <cmath>
export module student_1bib21094.Lab2.Variant21.Task4:f1;

namespace RBPO::Lab2::Variant21::Task4 {
	export double function1(double x, double y) {
		return (std::sqrt(x) - std::sqrt(y)) / x;
	}
}