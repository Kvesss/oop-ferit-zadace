#include "implement.cpp"

int main() {
	Description description(1, 45, "pilot");
	std::cout << description << std::endl;
	Episode episode(10, 88.64, 9.78, description);
	std::cout << episode << std::endl;

	// assume that the number of rows in the text file is always at least 10. 
	// assume a valid input file.
	std::string filename("shows.tv");
	const int count = 10;

	std::ifstream input(filename);
	Episode* episodes[count];
	if (input.is_open() == false)
		std::cin.get();
		return 1;

	for (int i = 0; i < count; i++) {
		episodes[i] = new Episode();
		input >> *episodes[i];
	}
	input.close();

	std::cout << "episodes:" << std::endl;
	print(episodes, count);
	sort(episodes, count);
	std::cout << "sorted episodes:" << std::endl;
	print(episodes, count);

	persistToFile("sorted.tv", episodes, count);

	for (int i = 0; i < count; i++) {
		delete episodes[i];
	}
	std::cin.get();
	return 0;
}