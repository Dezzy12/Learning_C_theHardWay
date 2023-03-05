#include <stdio.h>#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 1; i < argc; i++){
		printf("arg %d: %s\n", i, argv[i]);
	}

	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;

	for(i = 0; i < num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}


int main(int argc, char *argv[])
{
	int i = 0;

	if(argc == 1){
		printf("You only have one argument. You suck.\n");
	}else if(argc > 1 && argc < 4){
		printf("Here's your arguments:\n");

		for(i = 1; i < argc; i++){
			printf("%d: %s\n", i,  argv[i]);
		}
		printf("\n");
	}else{
		printf("You have too many arguments.You suck\n");
	}

	return 0;
}
