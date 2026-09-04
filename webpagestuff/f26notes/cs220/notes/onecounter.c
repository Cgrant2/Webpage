#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int ac, char ** argv) {
	srand(time(NULL));
	int num = rand() % 2147483648;
	if(ac >= 2) {
		num=atoi(argv[1]);
	}
	int count=0;
	//Variant 1, loop shift
	int num2=num;
	while(num2 != 0) {
		if(num2%2==1) {
			count++;
		}
		num2 = num2 >> 1;
	}
	//Variant 2, &= twiddling 
	int ones = 0;
	num2=num;
	while(num2>0) {
		num2 &= num2-1;
		ones++;
		}
	printf("In binary the value %d has %d one(s) in it\n", num, count);
	printf("In binary the value %d has %d one(s) in it\n", num, ones);
	return(0);
}
