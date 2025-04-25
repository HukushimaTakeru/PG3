#include<stdio.h>

int Recursive(int a , int b , int c ) {
	
	int kotei = a * c;

	if (kotei < b ) {
		printf("%d : %d : %d\n", kotei, b, c);

		return (a,b,c);

	}

	printf("%d : %d : %d\n", kotei, b, c);

	return Recursive( a,  b+(b * 2 - 50), c + 1 ); 

}


int main() {

	int a = 1070;//固定給料
	int b = 100; // 変動給料
	int x = 1; //労働時間

	int result;
	result = Recursive(a, b, x);

	return 0;
}