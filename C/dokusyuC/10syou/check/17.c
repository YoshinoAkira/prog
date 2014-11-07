#include <stdio.h>
struct s_type{
	int i;
	char ch;
	double d;
}var1, var2;

void struct_swap(struct s_type *one, struct s_type *two);
void s_show(struct s_type *var);

int main(void){

	var1.i=10;
	var1.ch='r';
	var1.d=10.5;

	var2.i=20;
	var2.ch='s';
	var2.d=23.45;
	printf("var1=%p\n",&var1);
	printf("var1.i=%p\n",&var1.i);
	printf("var1.ch=%p\n",&var1.ch);
	printf("var1.d=%p\n",&var1.d);
	printf("\n");
	
	printf("var2=%p\n",&var2);
	printf("var2.i=%p\n",&var2.i);
	printf("var2.ch=%p\n",&var2.ch);
	printf("var2.d=%p\n",&var2.d);
	printf("\n");

	printf("before swapping\n");
	printf("var1:\n");
	s_show(&var1);
	printf("\nvar2:\n\n");
	s_show(&var2);
	struct_swap(&var1,&var2);
	printf("after swapping:\n");
	printf("var1:\n");
	s_show(&var1);
	printf("\nvar2:\n");
	s_show(&var2);
	

	return 0;
}

void struct_swap(struct s_type *one, struct s_type *two){
	struct s_type tmp;
	tmp.i=one->i;
	tmp.ch=one->ch;
	tmp.d=one->d;
	
	one->i=two->i;
	one->ch=two->ch;
	one->d=two->d;

	two->i=tmp.i;
	two->ch=tmp.ch;
	two->d=tmp.d;
}

void s_show(struct s_type *var){
	printf("%d\n",var->i);
	printf("%c\n",var->ch);
	printf("%lf\n",var->d);
}
