#include <iostream>

#include "../includes/student.h"

int Student::instances = 0;

Student::Student() {
	this->name = "DefaultName";
	this->course = 1;
	this->gender = 0;
	Student::instances++;
}

Student::Student(std::string name, int course, bool gender) {
	this->name = name;
	this->course = course;
	this->gender = gender;
	Student::instances++;
}

Student::Student(const Student &student) {
	this->name = std::string(student.name);
	this->course = student.course;
	this->gender = student.gender;
	Student::instances++;
}

Student::~Student() {
	Student::instances--;
	std::cout << "Destroyed student. Instances left: " << Student::instances << "\n";
}

void Student::display() {
	std::cout << "=====================================================\n";
	std::cout << "User name: " << this->name << "\n";
	std::cout << "User course: " << this->course << "\n";
	std::cout << "User gender: " << this->gender << "\n";
	std::cout << "\nInstances now: " << Student::instances << "\n";
	std::cout << "=====================================================\n";
}
