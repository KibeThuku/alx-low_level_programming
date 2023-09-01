/**
 * @ifndef - directive that introduces define funtion
 */

#ifndef MAIN_H
#define MAIN_H

/* task 2.10 */
int get_bit(unsigned long int n, unsigned int index);
/* task 3.11 */
int set_bit(unsigned long int *n, unsigned int index);
/* task 0.0 */
unsigned int binary_to_uint(const char *b);
/* 4.100 */
int clear_bit(unsigned long int *n, unsigned int index);
/* task 5.101 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* task 1.1 */
void print_binary(unsigned long int n);
/* task 6. Endianness */
int get_endianness(void);
/* task 7. Crackme3 */
int _atoi(const char *s);
/* putchar */
int _putchar(char c);


#endif

