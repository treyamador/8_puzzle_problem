#ifndef INTERFACE_H_
#define INTERFACE_H_
#include <string>
#include <vector>
struct Node;


class Interface {

public:
	Interface(int elems);
	~Interface();

	std::vector<int*> get_configs(const std::string& filepath);
	int* convert(const std::string& filepath);

	int* prompt();
	bool exit_request(const std::string& input);
	int completed();

	void not_solvable();
	bool input_valid(const std::string& input);
	bool bypass_file();
	
	void print_heuristic(
		const std::string& heuristic,
		std::vector<Node*>& path,
		int frontier, int explored);
	void print_heuristic(const std::string& func);
	void print_stats(int depth, int explored, int frontier);
	void print_path(std::vector<Node*>& path);
	void print_node(Node* node);


private:
	const int ELEMENTS;

};


#endif
