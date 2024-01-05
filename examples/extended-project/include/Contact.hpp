#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact {
private:
    int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	static void	add_item(const std::string& item, std::string &dest);
public:
	Contact();
	~Contact();
    void add_index(int index);
    std::string get_data();
    std::string get_first_name();
	void Init();
	void Display();
	/*...*/
};

bool	returnstrue();

#endif