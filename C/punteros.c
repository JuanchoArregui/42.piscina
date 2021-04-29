
#include<unistd.h>
#include<stdio.h>


int	main(void)
{


	int kk;
	int kk2;
	int *ptr1;
	int **ptr2;
	int ***ptr3;

	int *ptrkk;



	kk = 23;
	kk2 = 666;
	ptrkk = &kk2;

	ptr1 = &kk;
	printf("dirección de kk: %p\n", &kk);
	printf("puntero ptr: %p\n", ptr1);
	ptr2 = &ptr1;
	printf("puntero ptr2: %p\n", ptr2);
	ptr3 = &ptr2;
	printf("puntero ptr3: %p\n", ptr3);
	printf("valor de ptr3: %d\n", ***ptr3);

	printf("\n");
	printf("valor de ptr3: %d\n", ptr3[0][0][0]);
	printf("valor de ptr2: %d\n", ptr2[0][0]);
	printf("valor de ptr1: %d\n", ptr1[0]);

	printf("\n");
	printf("puntero de ptr3[0][0][0]: %p\n", ptr3[0][0][0]);
	printf("puntero de ptr3[0][0]: %p\n", ptr3[0][0]);
	printf("puntero de ptr3[0]: %p\n", ptr3[0]);
	printf("puntero de ptr3: %p\n", ptr3);

	printf("\n");
	printf("MODIFICAMOS KK\n");
	kk = 42;
	printf("valor de ptr3: %d\n", ptr3[0][0][0]);
	printf("valor de ptr2: %d\n", ptr2[0][0]);
	printf("valor de ptr1: %d\n", ptr1[0]);

	printf("\n");
	printf("MODIFICAMOS ptr2\n");
	ptr2[0][0] = 84;
	printf("valor de ptr3: %d\n", ptr3[0][0][0]);
	printf("valor de ptr2: %d\n", ptr2[0][0]);
	printf("valor de ptr1: %d\n", ptr1[0]);

	printf("\n");
	printf("MODIFICAMOS ptr1\n");
	*ptr1 = 24;
	printf("valor de ptr3: %d\n", ***ptr3);
	printf("valor de ptr2: %d\n", **ptr2);
	printf("valor de ptr1: %d\n", *ptr1);


	printf("\n");
	printf("test\n");
	ptr3[0][0][0] = 777;
	ptr2 = &ptrkk;
	printf("valor de ptr3: %d\n", ***ptr3);
	printf("valor de ptr2: %d\n", **ptr2);
	printf("valor de ptr1: %d\n", *ptr1);
}
