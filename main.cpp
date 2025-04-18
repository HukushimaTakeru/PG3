#include<stdio.h>

template <typename T>
T Min(T a, T b) {
	if ( a > b) {
		return  b;
	} else {
		return  a;
	}
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入出来ません");
	return 0;
}


int main() {

	//int 
	printf("%d\n", Min<int>(10, 5));
	//float 
	printf("%f\n", Min<float>(15.2f, 31.4f));
	//double
	printf("%f\n", Min<double>(1.414210356f, 3.2360679f));
	//char
	printf("%c\n", Min('a', 'x'));



	return 0;
}