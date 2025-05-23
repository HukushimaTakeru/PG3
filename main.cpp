#include<stdio.h>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"

int main() {

    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound();
    animal2->sound();

    delete animal1;
    delete animal2;
	

	return 0;
}