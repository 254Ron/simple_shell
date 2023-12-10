#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void display_prompt(void);
void ron_print(const char *format);
void execute_command(const char *command);
void read_command(char *command, size_t size);
#endif
