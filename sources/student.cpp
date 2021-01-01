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
	std::cout << "Initialized with default constructor:\n";
	display();
}

Student::Student(std::string name, int course, bool gender) {
	this->name = name;
	this->course = course;
	this->gender = gender;
	this->number = ++Student::created;
	Student::instances++;
	std::cout << "Initialized with parameters:\n";
	display();
}

Student::Student(Student &student) {
	this->name = std::string(student.name);
	this->course = student.course;
	this->gender = student.gender;
	this->number = ++Student::created;
	Student::instances++;
	std::cout << "Initialized by copy:\n";
	display();
}

Student::Student(Student student) {
	Student temp(student);

	return temp;
}

Student::~Student() {
	Student::instances--;
	std::cout << "Destructuring student number " << this->number << "\n";
	std::cout << "Instances left after destroying: " << Student::instances << "\n";
}

void Student::set_name_course_gender(Student student, std::string name, int course, bool gender) {
	std::cout << "Student object at " << &student << " was initialized by copy. Editing:\n";
	student.name = name;
	student.course = course;
	student.gender = gender;
	student.display();
	std::cout << "Destroying the student that was initialized by copy in a function\n";
}

Student Student::get_student_from_temp(Student & student) {
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

