#include <stdio.h>

int main(void)

{
	char *str;

	str = "123456789";
	int i;

	for (i = 0; str[i] != '\0'; i++) {

		i++;

	printf("%d", i);
	}

	return(0);
}
