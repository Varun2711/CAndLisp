#include <stdio.h>
#include <stdlib.h>

// for this programming language we will need some way for user interation
// here we will implement an interactive prompt for input and output
// this prompt is built based on a system known as REPL
// REPL stands for Read, Evaluate, Print, Loop
// this is a common way for interacting with a programming language

// using the preprocessor to resolve portability issues

#ifdef _WIN32

// all code below this line only runs if the program in running on Windows OS
#include <string.h>

// global char array that stores the user input to be processed
static char buffer[2048];

// fake readline
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

// fake add_history (unecessary for windows so we keep it empty)
void add_history(char* unused) {}

// else include necessary for mac/linux operating systems

#else
#include <editline/readline.h>
#include <editline/add_history.h>
#endif




int main(int argc, char** argv){

    /*Print version and exit information*/
    puts("Lispy version 0.0.0.0.1\n");
    puts("press Ctrl+c to Exit\n");


    // loop
    while (1) { //infinite loop

        // new prompt code

        char* input = readline("lispy> ");
        add_history(input);

        printf("No you're a %s\n\n", input);
        free(input);

        // the Following comment code works fine on Windows, but may run into some trouble on other
        // operating systems. This issue is known as portability. C has a few tools to help tackle this problem.
        // specifically the C preprocessor. This is a program that runs before the compiler; any line with an
        // octothorpe at the beginning is a preprocessor command. So far we've been using this to include necessary header files


        // // output prompt
        // fputs("lispy> ", stdout);


        // // take input
        // fgets(input, 2048, stdin);

        // // process input here (not necessary in this basic case)

        // // Echo input back to user
        // printf("No you're a %s", input);
    }
    
    return 0;
}