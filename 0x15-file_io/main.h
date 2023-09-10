/* function to define a function */

#ifndef MAIN_H
#define MAIN_H

/* Include system libraries */

/**
 *  The <sys/types. h> header shall include definitions for at least the following types: blkcnt_t Used for file block counts
 *  The <sys/stat.h> header shall define the structure of the data returned by the fstat(), lstat(), and stat() functions
 *
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * Task 0 
 * A function that reads a text file and prints it to the POSIX standard outpu
 * @O_RDWR - function
 */

ssize_t read_textfile(const char *filename, size_t letters);

/**
 * Task 1
 * @O_CREATE
 * a function that creates a file
 */
int create_file(const char *filename, char *text_content);


/**
 * Task 2
 * O_APPEND
 * a function that appends text at the end of a file
 */

int append_text_to_file(const char *filename, char *text_content);

/**
 * Task 3
 * O_Copies
 * a program that copies the content of a file to another file.
 */

#endif
