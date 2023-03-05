#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *source, *target;

	source = fopen("file1.txt", "r");
	if (source == NULL){
		printf("NO contents found!\n press any key to exit...");

		exit(EXIT_FAILURE);
	}

	target = fopen("file2.txt", "w");
	if (target == NULL){
		fclose(source);
		printf("Failed\n press any key to exit...");

		exit(EXIT_FAILURE);
	}

	while((ch = fgetc(source)) != EOF)
		fputc(ch, target);
	printf("File copied successfully.\n");

	fclose(source);
	fclose(target);

	return 0; 
}
