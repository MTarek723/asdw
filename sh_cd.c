#include "main.h"
void sh_cd(const char *argv, const char *program_name)
{
if (argv == NULL) {
chdir(getenv("HOME"));
} else {
if (chdir(argv) != 0) {
perror(argv);
}
}
}
}
