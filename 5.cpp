#include <iostream>
#include "header.h"
std::vector<Student> VectorMathExcellent(const std::vector<Student>& student_v) {
	std::vector<Student> vec;
	for (int i = 0; i < student_v.size(); ++i) {
		if (student_v[i].Ratings[1] == 5) {
			vec.push_back(student_v[i]);
		}
	}
	return vec;
}
