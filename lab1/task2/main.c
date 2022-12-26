#include "sys/wait.h"
#include "stdio.h"
#include "unistd.h"
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int status;
    char* arguments[argc];
    for (int i = 0; i < argc-1; i++) {
        arguments[i] = argv[i+1];
    }
    arguments[argc - 1] = NULL;
    int pid = fork();
    if (pid == 0) {
        execvp(argv[1], arguments);
        exit(1);
    }
    else {
        waitpid(pid, &status, 0);
        if (status == 0) {
            printf("Success!\n");
        }
        else {
            printf("Failed, exit code = %d\n", status);
        }
    }
    return 0;
}