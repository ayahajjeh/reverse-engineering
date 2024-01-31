#include <stdio.h>
#include <string.h>

char inp[20];

void check_passwd()
{
	printf("Enter the password: ");
	scanf("%10s", inp);

	if (inp[0] == 'T')
		if (inp[1] == 'e')
		  if (inp[2] == 'S')
		    if (inp[3] == 't') 
		      if( inp[4] == '\0' ) {
            printf("Correct Password :)\n");
	          return ;
          }

	printf("Wrong Password :(\n");
}

int main(int argc, char **argv)
{
  check_passwd();
	return 0;
}

