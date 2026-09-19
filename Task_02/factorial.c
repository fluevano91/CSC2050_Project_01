#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	long num;
	char *endptr;
	int i;
	long acc = 1;


	if(argc != 2) {
		printf("Error : please only provide one argument\n");
		return 1;
	}
	else {
	num =  strtol(argv[1], &endptr, 10);
	if (*endptr != '\0'){
		printf("Error: non-numerical input entered\n");
		return 1;
	} else if (num < 0) {
		printf("Error: please input a non negative number.\n");
			return 1;
	}

	for(i = 1; i <= num; i++){
			acc = acc * i;
		}
	printf("%ld\n", acc);
	}

	
return 0;
}


