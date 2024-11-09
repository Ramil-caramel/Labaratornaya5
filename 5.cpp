#include <iostream>
#include "header.h"
std::vector<Student> VectorMathExcellent(const std::vector<Student>& student_v) {
	std::vector<Student> vec;
	for (int i = 0; i < student_v.size(); ++i) {
		for (int j = 0; j < student_v[i].Subjects.size(); ++j) {
			if (student_v[i].Subjects[j] == "Math" and student_v[i].Ratings[j] == 5) {
				vec.push_back(student_v[i]);
			}
		}
	}
	return vec;
}
