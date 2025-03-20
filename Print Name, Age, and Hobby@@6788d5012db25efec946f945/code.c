#include <stdio.h>

int main() {

char username[100];

int age = 0;

char user_favorite_hobby[100];

scanf("&s %i %s", &username, &age, &user_favorite_hobby);

printf("Name: %s\n", username);
printf("Age: %i\n", age);
printf("Hobby: %s\n", user_favorite_hobby);

return 0;
}