#include <vector>
#include "header.h"
size_t CountTwoness(const std::vector<Student> &student_v){
	size_t chislo= 0;

	for (int i = 0; i < student_v.size(); ++i){
		for (int j = 0; j < student_v[i].Ratings.size();++j){
			if (student_v[i].Ratings[j] == 2){
				++chislo;
				break;
			}
		}
	}
	return chislo;
}
