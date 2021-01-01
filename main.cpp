#include <iostream>

#include "includes/student.h"

int main() {
	Student student;

	std::cout << "\nConstructing dynamically allocated student\n";
	Student *dynamic_student = new Student("Dynamically Allocated", 4, 1);

	std::cout << "\nDestroying dynamically allocated student\n";
	delete dynamic_student;

	std::cout << "\nEditing student data of object at " << &student << " (Copy constructor type 2)\n";
	Student::set_name_course_gender(student, "New name", 2, 0);
	student.display();

	std::cout << "\nCopy constructor type 1:\n";
	Student copied_student = student;

	std::cout << "\nCopy constructor type 3:\n";
	Student temporary_object_student = Student(student);

	std::cout << "Array of students:\n";
	Student students[3];

	std::cout << "\nDestroying students at the end of the program\n";
	return 0;
}

