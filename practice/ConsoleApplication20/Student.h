#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

#define MAX_STRING 100

class Student
{
private:
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];
public:
	Student();
	Student(int, char *, char *);
	void set(int, char *, char *);
	void display();

	friend std::ostream& operator<<(std::ostream& os, const Student& data)
	{
		os << data.id << '/' << data.name << '/' << data.dept;
		return os;
	}

};