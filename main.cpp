#include <iostream>

#include "includes/student.h"

int main() {
	std::cout << "Constructing student with default constructor\n";
	Student student;
	student.display();

	std::cout << "\nConstructing dynamically allocated student with parameters\n";
	Student *dynamic_student = new Student("Dynamically Allocated", 4, 1);
	dynamic_student->display();

	// std::cout << "\nDestroying dynamically allocated student\n";
	// delete dynamic_student;

	std::cout << "\nDestroying students at the end of the program\n";
	return 0;
}

