#include <stdio.h>

/**
 * pre_main - function to execute before main
 * __attribute__((constructor)) will make this function run before main
 */
void pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

