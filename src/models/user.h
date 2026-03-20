#ifndef USER_H
#define USER_H

typedef struct User User;

struct User {
    int id;
    char* name;
};

User* user_create(int id, char* name);
void user_destroy(User* user);

#endif