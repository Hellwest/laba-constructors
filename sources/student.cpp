#include <iostream>
#include <string>

#include "../includes/student.h"

int Student::created = 0;
int Student::instances = 0;

Student::Student() {
	this->name = "DefaultName";
	this->course = 1;
	this->gender = 0;
	this->number = ++Student::created;
	Student::instances++;
}

Student::Student(std::string name, int course, bool gender) {
	this->name = name;
	this->course = course;
	this->gender = gender;
	this->number = ++Student::created;
	Student::instances++;
}

Student::Student(const Student &student) {
	this->name = std::string(student.name);
	this->course = student.course;
	this->gender = student.gender;
	this->number = ++Student::created;
	Student::instances++;
}

Student::~Student() {
	Student::instances--;
	std::cout << "Destructuring student number " << this->number << ". Instances left after destroying: " << Student::get_instances_count() << "\n";
}

void Student::edit(std::string name, int course, bool gender) {
	this->name = name;
	this->course = course;
	this->gender = gender;
}

void Student::constructor_by_copy_type_2(Student student) {
	std::cout << "Student object at " << &student << " was initialized by copy:\n";
	student.display();
	std::cout << "Destroying the student that was initialized by copy in a function\n";
}

Student Student::get_student_from_temp(Student &student) {
	Student temp(student);

	return temp;
}

void Student::display() {
	std::cout << "=====================================================\n";
	std::cout << "User name: " << this->name << "\n";
	std::cout << "User course: " << this->course << "\n";
	std::cout << "User gender: " << this->gender << "\n";
	std::cout << "User number: " << this->number << "\n";
	std::cout << "\nInstances now: " << Student::get_instances_count() << "\n";
	std::cout << "=====================================================\n";
}

int Student::get_instances_count() {
	return Student::instances;
}

