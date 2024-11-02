#include "header.h"

void SortByName(std::vector<Student>& student_v) {
    Student prom;
    for (int i = 0; i < student_v.size(); i++) {
        for (int j = 0; j < student_v.size() - 1; j++) {
            if (!(student_v[j].Name < student_v[j + 1].Name)) {
                prom = student_v[j];
                student_v[j] = student_v[j + 1];
                student_v[j + 1] = prom;
            }
        }
    }
}
