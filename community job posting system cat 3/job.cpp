#include <iostream> 
#include <string> 
using namespace std;

class Job {
    private: 
    int id;
    string title;
    string description;

    public: 
    Job (int jobId = 0, string jobTitle = "", string jobDesc = "", string poster = "") {
        id = jobId;
        title = jobTitle;
        description = jobDesc;
        postedBy = poster;
    }
    void displayJob () {
        cout << "\nJob ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "description: " << description << endl;
        cout << "posted By: " << posted << endl;
        }
int getId() {return id; }
string getTitle() { return title; }
string getPostedBy() { return postedBy; }
};