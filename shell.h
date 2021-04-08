#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void print_prompt1(void);
void print_prompt2(void);

char *read_cmd(void);

#endif /* _SHELL_H_ */
