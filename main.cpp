#include <iostream>

using namespace std;

struct hello {
public:
	std::string name;
	int age;
	std::string occupation;
};

void fun_1(std::string name, int age) {
	
	std::cout << "hello" << name << "your age is " << age << "\n";
}

int main() {
	fun_1("Jeryl", 20);
	


	hello student1;
	student1.name = "Jeryl";
	student1.age = 20;
	student1.occupation = "hacker";

	std::cout << "Your name is " << student1.name << "you are  " << student1.age << "and you are a  " << student1.occupation << "\n";
	std::cout<<"hello world";

    return 0;
}