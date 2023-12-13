#include "shell.h"
/**
 *  ron_print - prints string
 *  @format: format to be printed
 *
 **/
void ron_print(const char *format)
{
	write(STDOUT_FILENO, format, strlen(format));
}
