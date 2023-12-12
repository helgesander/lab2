module;
#include <cmath>
export module student_1bib21094.Lab2.Variant21.Task4:a;


namespace RBPO::Lab2::Variant21::Task4 {
	double a(int i) {
		return pow(-1, i) / ((i + 1) * (i + 2) * (i + 3));
	}
}