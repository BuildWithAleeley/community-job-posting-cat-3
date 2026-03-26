#include <iostream>
#include <string>
#include "Community.cpp"

using namespace std;

class User { 
    protected: 
    string name;
    string role; // "jobseeker" or "employer"

    public:
    User (string userName = "", string userRole = "") {
        name = userName;
        role = userRole;
    }
    void postJob (Community &community) {
        int id:
        string title, description;
        
        cout << "\n -- Post a Job --\n";
        cout << "Enter Job ID: ";
        cin >> id;
        cout << "Enter Job Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Job Description: ";
        getline(cin, description);

        Job newJob(id, title, description, name);
        community.addJob(newJob);   

    }
    void viewJobs (Community &community) {
        cout << "\n -- Available Jobs --\n";
        community.ListJobs();
    }
};