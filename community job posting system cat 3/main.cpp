#include <iostream>
#include <string>
#include "Job.cpp"
#include "User.cpp"
#include "Admin.cpp"
#include "Community.cpp"

using namespace std;

int main() {
    // creating a community object to store jobs
    Community community;

    User member1("Wanaina", "Member");
    USer member2("Ruto", "Member");
    Admin admin("Ahmad", "Admin");


    int choice;

    do {
cout << "\n=== community Job Posting System ===\n";
cout << "1. Post a  job \n";
cout << "2. View all jobs \n";
cout << "3. Search Job by ID\n";
cout << "4. Search Job by Title\n";
cout << "5. Exit\n";
cout << "Enter your choice: ";
cin >> choice;


     switch (choice) {
    case 1: { 
        // selecting which member gets to post a job
        cout << "Select user to post a job:\n";
        cout << "1. Ali (Member)\n";
        cout << "2. Ruto (Member)\n";
        int  choice;

        cin >> choice;
        if (userchoice == 1) member1.postJob(community);
        else if (userchoice == 2) member2.postJob(community);
        else cout << "Invalid user. \n";
        break;
    }
 case 2: 
 // List all jobs
        community.listJobs();
        break;

        case 3: {
            int id;
            cout << "Enter Job ID: ";
            cin >> id;
            community.searchJob(id); // search optimized by ID
            break;
        }
         case 4: {
            string  title;
            cout << "Enter Job Title:" ;
            cin.ignore();   
            getline(cin, title);
            community.searchJob(title); // search optimized by Title
            break;
        }

        case 5: {
            int id;
            cout << "Enter Job ID to delete (only Admin can delete): ";
            cin >> id;
            admin.deleteJob(community,id); // delete job by ID
            break;
        }
        case 6:
            cout << "Exiting the system. Goodbye!\n";
            break;

            default: 
            cout << "Invalid choice. Try again.\n";

    }
    } while (choice != 6);

return 0;

}

