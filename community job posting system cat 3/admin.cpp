#include <iostream>
#include <string>
#include "User.cpp"
using namespace std;

class Admin : public User {
    public:
    Admin (string adminName, string userRole) : User(adminName, userRole) {}

    void deleteJob(community &community, int id) {
        cout << "\n --Admin Delete Job--\n";
        community.deleteJob(id);
    }
};