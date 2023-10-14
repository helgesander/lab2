#include <cmath>

module student_1bib21094.Lab2.Variant21.Task3;

double RBPO::Lab2::Variant21::Task3::function2(double x) {
	return (x <= 3) ? (pow(x, 2) + 3 * x + 9) : (sin(x) / (pow(x, 2) - 9));	
}