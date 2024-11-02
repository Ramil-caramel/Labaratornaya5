#include "header.h"

void SortByRating(std::vector<Student> &student_v) {
	

	std::vector<stud_Bal> stud_bal_v;
	double sr = 0;
	int ch = 0;

	for (int i = 0; i < student_v.size(); ++i) {
		stud_Bal prom;
		prom.sr_rating = 0;
		prom.student = student_v[i];
		for (int j = 0; j < student_v[i].Ratings.size(); ++j) {
			sr += student_v[i].Ratings[j];
			ch += 1;
		}
		prom.sr_rating += sr/ch;
		sr = 0;
		ch = 0;
		stud_bal_v.push_back(prom);
	}

	stud_Bal pr;

	for (int i = 0; i < stud_bal_v.size(); i++) {
		for (int j = 0; j < stud_bal_v.size() - 1; j++) {
			if (stud_bal_v[j].sr_rating < stud_bal_v[j + 1].sr_rating) {
				pr = stud_bal_v[j];
				stud_bal_v[j] = stud_bal_v[j + 1];
				stud_bal_v[j + 1] = pr;
			}
		}
	}
	for (int i = 0; i < student_v.size(); ++i) {
		student_v[i] = stud_bal_v[i].student;
	}
}
