#include <iostream>
#include <vector>
#include <string>
#include "header.h"

int main()
{
    std::vector<Student> a;
    std::vector<std::string> b;
    std::string new_id;
    std::vector<Group> new_group;
    std::vector<stud_Bal> a1;

    Student ivan = {
            "Ivan",
            "A",
            {5, 3, 4},
            {"Angem", "Math", "History"}
    };
    Student kate = {
            "Kate",
            "B",
            {4, 2, 4},
            {"Geom", "Math", "History"}
    };
    Student dima = {
            "Dmitry",
            "B",
            {2, 4, 5},
            {"Geom", "Math", "History"}
    };
    Student masha = {
            "Maria",
            "C",
            {5, 5, 5},
            {"Geom", "Math", "History"}
    };
    std::vector<Student> student_v = {ivan, kate, dima, masha };

    std::cout << "1)" << std::endl;
    SortByName(student_v);
    for (int i = 0; i< student_v.size();++i){
        std::cout << student_v[i].Name << std::endl;
    }

    std::cout << "2)" << std::endl;
    SortByRating(student_v);
    for (int i = 0; i < student_v.size(); ++i) {
        std::cout << student_v[i].Name << std::endl;
    }

    std::cout << "3)" << std::endl;
    std::cout << CountTwoness(student_v) << std::endl;

    std::cout << "4)" << std::endl;
    std::cout << CountExcellent(student_v) << std::endl;

    std::cout << "5)" << std::endl;
    a = VectorMathExcellent(student_v);
    for (int i = 0; i < a.size(); ++i){
        std::cout << a[i].Name << std::endl;
    }

    std::cout << "6)" << std::endl;
    b = GroupsId(student_v);
    for (int i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "7)" << std::endl;

    
    new_group = Groups(student_v);
    for (int i = 0; i < new_group.size(); ++i) {
        std::cout << new_group[i].Id << std::endl;
        for (int j = 0; j < new_group[i].Students.size(); ++j) {
            std::cout << new_group[i].Students[j].Name << " ";
        }
        std::cout << std::endl;
    }

}
