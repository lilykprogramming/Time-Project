#include <iostream>
#include "Time.h"

int main(int argc, char** argv) {
	Time start(5,17,39,0);
	Time end(6,15,40,0);
	Time difference = start.difference(end);
	difference.return_variable();
	return 0;
}
