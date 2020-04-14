#ifndef GPIO_H
#define GPIO_H

int create(char buffer[]);
int direc(char buffer[]);
int light(char pin, char val);
int unset(char buffer[]);

#endif
