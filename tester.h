#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include <fcntl.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <errno.h>

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_RESET   "\x1b[0m"
#define COLOR_BLUE   "\033[1;34m"
#define COLOR_YELLOW "\033[1;33m"
#define COLOR_PINK	"\033[0;35m"


void	ft_save_results(char *str);
