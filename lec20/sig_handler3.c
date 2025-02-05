/*
 * Example of signal handlers for SIGALRM, SIGINT, and SIGCONT
 *
 * A signal handler function prototype must match:
 *   void handler_function_name(int signum);
 *
 * Compile and run this program, then send this process signals by executing:
 *  kill -INT  pid  (or Ctrl-C) will send a SIGINT
 *  kill -CONT pid  (or Ctrl-Z fg) will send a SIGCONT
 */
//To have a function as a param, use a function pointer.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

/* signal handler for SIGALRM */
void sigalarm_handler(int sig) {
    printf("BEEP, signal number %d\n.", sig);
    fflush(stdout);
}

/* signal handler for SIGCONT */
void sigcont_handler(int sig) {
    printf("in sigcont handler function, signal number %d\n.", sig);
    fflush(stdout);
}

/* signal handler for SIGINT */
void sigint_handler(int sig) {
    printf("in sigint handler function, signal number %d...exiting\n.", sig);
    fflush(stdout);
    exit(0);
}

/* main: register signal handlers and repeatedly block until receive signal */
int main() {

    /* Register signal handlers. */
    if (signal(SIGCONT, sigcont_handler) == SIG_ERR) {
        printf("Error call to signal, SIGCONT\n");
        exit(1);
    }

    if (signal(SIGINT, sigint_handler) == SIG_ERR) {
        printf("Error call to signal, SIGINT\n");
        exit(1);
    }

    if (signal(SIGALRM, sigalarm_handler) == SIG_ERR) {
        printf("Error call to signal, SIGALRM\n");
        exit(1);
    }

    printf("kill -CONT %d to send SIGCONT\n", getpid());

    while(1) {
        pause(); /* wait for a signal to happen */
    }
}

