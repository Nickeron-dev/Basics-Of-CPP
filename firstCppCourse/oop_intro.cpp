#include <iostream>
#include <list>

class User {
private: // if you don't type public, all following fields will be private
    std::list<std::string> actions;
    std::string name;
    int id;

public:
    User(std::list<std::string> actions_param, std::string name_param) {
	       actions = actions_param;
	       name = name_param;
	       id = 1;
    }
	
    void to_string() {
	std::cout << "Name: " << name << std::endl;
    	for (std::string action : actions) {
            std::cout << "Action: " << action << std::endl;
    	}
    	std::cout << "Id: " << id << std::endl;
    }

    std::string add_action(std::string new_action) {
	actions.push_back(new_action);
    	return new_action;
    }

    std::string get_name() {
	return name;
    }

    void set_name(std::string new_name) {
        name = new_name;
	return;
    }

    int get_id() {
        return id;
    }
    // no setter for id, it will be immutable

};

class Paying_user:public User {
private:
	int balance;

public:
        Paying_user(std::list<std::string> actions_param, std::string name_param):User(actions_param, name_param) {
		balance = 300;
        }
	
	void to_string() {
//		to_string();
		std::cout << "Balance: " << balance <<std::endl;
	}

	int get_balance() {
		return balance;
	}
};

int main() {
    User user({"Sleep", "Hide", "Walk"}, "John");
    user.add_action("Hello");
    user.to_string();

    User illia({"Program", "Develop"}, "Illia");
    illia.to_string();
    std::cout << illia.get_name() << std::endl;
    illia.set_name("Ivan");
    std::cout << illia.get_name() << std::endl;
    std::cout << "ID: " << illia.get_id() << std::endl;
    illia.add_action("Jump");
    illia.to_string();

    Paying_user guy({"Sleep", "Hide", "Walk"}, "Guy");
    guy.to_string();
    std::cout << guy.get_balance() << std::endl;
    

    User * illia2 = &illia;
    illia2->to_string();
    User * guy2 = &guy;
    guy2->to_string();
    return 0;
}
