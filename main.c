#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
// struct
struct Poke {int n; char name[15];};

// print struct
void print_Poke (struct Poke * poke){
  printf("index number: %d, name: %s\n", poke -> n, poke -> name);
}

// create new struct
struct Poke * new_struct(int num, char str[15]){
  struct Poke * p = malloc(sizeof(struct Poke));
  p->n =num;
  strcpy(p->name,str);
  return p;
}

int main(){
  struct Poke pika = {1, "pikachu"};
  print_Poke(&pika);
  srand(time (NULL));
  struct Poke* squi = new_struct(rand(), "squirtle");
  print_Poke(squi);
  free(squi);
  return 0;
}
