#include <stdio.h>

struct voo{
    char man;
    int length;

}chu;
int func(int* f){
    printf("%d" , *f);
    return 0;
}
int main()
{
   // type casting of single to double pointer....
//    char b = 'a';
//   char *ptr = &a;
//   int **r = (int**)&ptr;
//   char **iptr = &ptr;
//   int **d = (int **)iptr;

   int len = 2;

   char *a = "Hello world";
   chu.length = len;

   chu.man = 'a';
   int fix = func(&chu->length);
//   char *c = *(a + 2);
//
//   printf("%c" ,c );

//   printf("%c , %c" , **r , **d);
   return 0;


}
