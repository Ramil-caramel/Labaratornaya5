#include <iostream>
#include "header.h"
size_t CountExcellent(const std::vector<Student>& student_v) {
	size_t kol = 0, prome =0 ;

	for (int i = 0; i < student_v.size(); ++i) {
		for (int j = 0; j < student_v[i].Ratings.size(); ++j) {
			if (student_v[i].Ratings[j] == 5) {
				++prome;
			}
		}
		if (prome == student_v[i].Ratings.size()) {
			++kol;
		}
		prome = 0;
	}
	return kol;

}
