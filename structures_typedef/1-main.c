#include "dog.h"
#include <stdio.h>

int main(void)
{
	struct dog my_sunny;

init_dog(&my_sunny, "Sunny", 1.5, "Bariyah");
	printf("Name: %s\n", my_sunny.name);
	printf("Age: %.1f\n", my_sunny.age);
	printf("Owner: %s\n", my_sunny.owner);

	return (0);
}
