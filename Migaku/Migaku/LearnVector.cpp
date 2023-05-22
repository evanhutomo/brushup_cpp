#include "LearnVector.h"
#include <vector>
#include <iostream>

LearnVector::LearnVector() {
	LearnVector::someVar = 0;
}

void LearnVector::DoSomething(int x) {
	std::vector<int> vec{ 1,2,3,4,5 };

	std::cout << "Intially vector: ";
	for (auto i = vec.begin(); i < vec.end(); i++)
	{
		std::cout << " " << *i;
	}

	vec.insert(vec.begin(), 10);//Inserting 10 to the vector
	vec.push_back(77);
	std::cout << "\nvec[2]: " << vec.at(2) << std::endl;
	std::cout << "\nThe modified vector is: ";
	for (auto i = vec.begin(); i < vec.end(); i++)
	{
		std::cout << " " << *i;
	}

	if (vec.empty()) {
		std::cout << "\nvec empty" << std::endl;
	}
	else {
		std::cout << "\nvec not empty" << std::endl;
	}
	vec.insert(vec.begin() + 2, 100);
	vec.insert(vec.begin() + 5, 3, 33);

	std::cout << "New vector :\n";
	for (auto x : vec) {
		std::cout << x << " ";
	}

	std::cout << "\nSize vector is: " << vec.size() << std::endl;

	std::vector<int> vec2(x);
	std::cout << "Initial vector size = " << vec2.size() << std::endl;
	vec2.resize(5, 10);
	std::cout << "Vector after resize = " << vec2.size() << std::endl;
	std::cout << "Vector contains following elements" << std::endl;
	for (int i = 0; i < vec2.size(); ++i)
		std::cout << vec2[i] << " ";


	std::vector<int> vec3;
	// returns the max_size of vector
	std::cout << "max_size of vector 1 = " << vec3.max_size() << std::endl;
	std::vector<int> vec4;
	// returns the max_size of vector
	std::cout << "max_size of vector 2 = " << vec4.max_size() << std::endl;


}