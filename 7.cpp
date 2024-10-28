#include <iostream>
#include "header.h"
std::vector<Group> Groups(const std::vector<Student>& student_v) {
	std::vector<Group> otv;
	Group new_grup;
	int flag = 1;

	new_grup.Id = student_v[0].GroupId;
	new_grup.Students.push_back(student_v[0]);
	otv.push_back(new_grup);
	new_grup.Students = {};

	for (int i = 1; i < student_v.size(); ++i) {
		for (int j = 0; j < otv.size(); ++j) {
			if (student_v[i].GroupId == otv[j].Id) {
				otv[j].Students.push_back(student_v[i]);
				flag = 0;
			}
		}
		if (flag) {
			new_grup.Id = student_v[i].GroupId;
			new_grup.Students.push_back(student_v[i]);
			otv.push_back(new_grup);
		}
		new_grup.Students = {};
		flag = 1;
	}
	return otv;

}
