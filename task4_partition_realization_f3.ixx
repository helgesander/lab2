//module;

export module student_1bib21094.Lab2.Variant21.Task4:f3;

import :a;

namespace RBPO::Lab2::Variant21::Task4 {
	export double function3(int n) {
		double sum = 0.0;
		for (int i = 0; i <= n; ++i) sum += a(i);
		return sum;
	}
}