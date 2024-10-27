#include <iostream>
#include "header.h"
std::vector<std::string> GroupsId(const std::vector<Student>& student_v) {
	std::vector<std::string> otv;
	int flag = 1;
	otv.push_back(student_v[0].GroupId);

	for (int i = 0; i < student_v.size(); ++i) {
		for (int j = 0; j < otv.size(); ++j) {
			if (student_v[i].GroupId == otv[j]) {
				flag = 0;
			}
		}
		if (flag) {
			otv.push_back(student_v[i].GroupId);
		}
		flag = 1;
		
	}
	return otv;
}
