#include <iostream>
#include "graphics.h"


void print_point(const Point& p) {
	printf("Point: (%d, %d)\n", p.x, p.y);
}

void print_message(const char* mess) {

	std::cout << mess;
}

Point plus_point(const Point& p1, const Point& p2) {

	return Point{ p1.x + p2.x, p1.y + p2.y };
}
