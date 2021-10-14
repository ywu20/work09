#include<stdio.h>

// struct
struct Poke {int n; char name[10];};

// print struct
void print_Poke (struct Poke * poke){
  printf("index number: %d, name: %s\n", poke -> n, poke -> name);
}


int main(){
  struct Poke pika = {1, "pikachu"};
  print_Poke(&pika);
  return 0;
}
