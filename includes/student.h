#pragma once

#include <string>

class Student {
	private:
		static int instances;
		std::string name;
		int course;
		bool gender;
	public:
		Student();
		Student(std::string name, int course, bool gender);
		Student(const Student &student);
		~Student();

		void display();
};

