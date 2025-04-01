#include <stdio.h>
#include <stdlib.h>
struct student{
  int age;
  int roll;
};
int main(){
  struct student* emp = (struct student*)malloc(sizeof(struct student));
  emp -> age = 122;
  printf("%d",emp->age);
}