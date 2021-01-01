#pragma once

#include <string>
#include <iostream>

class Student {
	static int created;
	public:
		std::string name;
		int course;
		bool gender;
		int number;
		static int instances;

		Student();
		Student(std::string name, int course, bool gender);
		Student(Student &student);
		Student(Student student);
		~Student();

		static void set_name_course_gender(Student student, std::string name, int course, bool gender);
		static Student get_student_from_temp(Student & student);
		void display();
		static int get_instances_count();
};

