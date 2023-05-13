#include <stdio.h>
#include <math.h>

// function declaration
// a function should be declared above their calls
// ie if there is a function myFunc, and it is being called at line 66
// they myFunc should be declared above line 66

// a function should return a value of the same type as its return type,
// in this case, addTwo returns an integer
int addTwo(int x) {
    return x + 2;
}

// function with a return type void will not return anything
void doSomething() {
    printf("I did something\n");
}

// functions that prints Hello World n times
void nHelloWorlds(int n) {
    for(int i = 0; i < n; i++) {
        printf("%s\n", "Hello World!");
    }
}

// Structure declarations

// C is a procedural language, that does not support OOP
// As such, if one wants to make new datatypes, they would have to do so using structs

// Structures are essentially a group of variables

typedef struct{
    float x;
    float y;
} point;

int main(int argc, char** argv) {
    // variables
    // some common primitives
    int x = 2;
    long bigNumber = 1203430;
    double coffeePrice = 5.25f;
    const double PI = 3.14159265;
    char firstInitial = 'V';
    printf("%d\n%ld\n%f\n%f\n%c\n", x, bigNumber, coffeePrice, PI, firstInitial);

    // mathematical operations
    int n = 2 +1;
    int y = 4 * 5;
    double z = y - ((double)(y-n)/x); //type casting is needed when dividing (since C by default assumes integer division)
    int m = 5 % 2;

    printf("%d\n%d\n%f\n%d\n", n, y, z, m);

    int xPlusTwo = addTwo(x);

    printf("%d\n", xPlusTwo);

    doSomething();

    point p; // declared a new point p
    p.x = 3;
    p.y = 4;

    float pMagnitude = sqrt(p.x*p.x + p.y*p.y);
    printf("magnitude of Point p: %f\n", pMagnitude);

    //pointers will be covered in later chapters
    //can be used for low level memory manipulation among other things
    // a pointer variation of a type is simply the type with an asterisk appended to the end
    // for example, an integer pointer would be representer by int*

    // In C, Strings are represented by the pointer type char*
    // Strings technically don't exist in C
    // and char* stores the string as an array of chars.
    // all Strings must end with a special character known as the null terminator;

    char* str = "hello world! I am a string";

    printf("%s\n", str);
    

    // conditionals

    // blocks of code that are only executed if a given condition is met
    // for example lets say we want to print "hello world" only if a number x is greater than 10
    // otherwise we to print "goodbye!"

    // the following logic would be written as following:
    x = 10; // this can be any number; we declared x above

    if (x > 10) {
        printf("%s\n", "hello world");
    } else {
        printf("%s\n", "goodbye!");
    }

    // we can also use logical operators to make more complex conditions as well
    // not (!) and (&&) or (||), bitwise and (&) bitwise or (|) and bitwise xor (^)


    // loops

    // While loops
    // blocks of code that continue iterating given that a condition is satisfied

    // a loop that iterates until x = 10;

    x = 0;
    while (x < 10) {
        doSomething(); //the function was defined above;
        x++;
    }

    // Do-while loops
    // similar to while loops, except they ensure at least one iteration
    do {
        doSomething();
        x++;
    } while(x < 15);


    // For loops
    // iterates for a fixed number of times;
    // very useful when you know the number of iterations you need

    // for example let's say we want to print the numbers from 0-9

    for(int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }



    // More examples

    for(int i = 0; i < 5; i++) {
        printf("%s\n", "Hello World");
    }

    x = 0;
    while (x < 5) {
        printf("%s\n", "Hello World");
        x++; // we increment the counter variables in while and do-while loops,
        // so that we don't get stuck in an infinite loop
    }

    printf("\n\n\n");

    // scroll up for the function declaration
    nHelloWorlds(4);



    


    return 0;
}

