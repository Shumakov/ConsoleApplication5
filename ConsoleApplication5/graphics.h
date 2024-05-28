#pragma once
#include "complect.h"


struct Point {
	int x;
	int y;
};

void print_point(const Point&);
Point plus_point(const Point&, const Point&);
void print_message(const char*);

void print_test(const char*);