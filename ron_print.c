#include "shell.h"

void ron_print(const char *format){
	write(STDOUT_FILENO, format, strlen(format));
}
