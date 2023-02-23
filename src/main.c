#include <stdio.h>
#include <stdlib.h>

typedef struct User{
	int age;
	char name[10]; 
} User;

int main(int argc, char** argv){
	User* user = malloc(sizeof(User));
	printf("Enter your name: ");
	scanf("%s", user->name);
	user->name[9] = '\0';
	printf("Enter your age: ");
	scanf("%d", &user->age);
	printf("Your name is %s and your age is %d\n", user->name, user->age);

	free(user);
	user = NULL;



	return 0;

}
