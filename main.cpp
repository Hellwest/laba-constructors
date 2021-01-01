#include <iostream>

#include "includes/student.h"

int main() {
	std::cout << "Constructing student with default constructor\n";
	Student student;
	student.display();

	std::cout << "\nConstructing dynamically allocated student with parameters\n";
	Student *dynamic_student = new Student("Dynamically Allocated", 4, 1);
	dynamic_student->display();

	std::cout << "\nDestroying dynamically allocated student\n";
	delete dynamic_student;

	std::cout << "\nEditing student number " << student.number << " using custom set-function:\n";
	student.edit("New name", 2, 0);
	student.display();

	std::cout << "\nCopy constructor type 1\n";
	Student copied_student = student;
	copied_student.display();

	std::cout << "\nCopy constructor type 2. Original object address: " << &student << "\n";
	Student::constructor_by_copy_type_2(student);

	std::cout << "\nCopy constructor type 3\n";
	Student temporary_object_student = Student::get_student_from_temp(student);
	temporary_object_student.display();

	std::cout << "\nDefining array of students\n";
	Student students[3];
	students[0].edit("Array member 1", 1, 1);
	std::cout << "Student 1 in the array:\n";
	students[0].display();

	std::cout << "\nDestroying students at the end of the program\n";
	return 0;
}

