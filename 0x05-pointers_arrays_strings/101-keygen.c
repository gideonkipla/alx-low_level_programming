#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

'int main(void)'
{
    char password[PASSWORD_LENGTH + 1] = {'\0'};
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    printf("%s\n", password);

    return 0;
}
