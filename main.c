
#include<stdio.h>
/* demo.c:  My first C program on a Linux */
int main(void)
{
 printf("Hello! This is a test prgoram.\n");
 return 0;


FILE *f = fopen("/proc/cpuinfo", "r");
size_t sz = 0;
char * lin = 0;
do {
   ssize_t lsz = getline (&lin, &sz, f);
   if (lsz<0) break;
   handle_line_of_size (lin, lsz);
} while (!feof (f));
fclose (f);

}
