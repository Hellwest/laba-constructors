#pragma once

#include <string>
#include <iostream>

class Student {
	private:
		static int created;
		static int instances;
		std::string name;
		int course;
		bool gender;
	public:
		int number;

		Student();
		Student(std::string name, int course, bool gender);
		Student(const Student &student);
		~Student();

		void edit(std::string name, int course, bool gender);
		static void constructor_by_copy_type_2(Student student);
		static Student get_student_from_temp(Student &student);
		void display();
		static int get_instances_count();
};

