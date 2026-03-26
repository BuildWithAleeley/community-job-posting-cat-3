#include <iostream> 
#include <string> 
#include "job.cpp"
 using namespace std;

 class community {
    private:
    Job job[150] // number of jobs available 
    int jobcount;

    public:
    community () { jobCount  = 0; }
    void addJob (JOb newJob) {
         if (jobCount < 150) {
               job[jobCount] = newJob;
               jobCount++;
               cout << "Job added successfully!
         } else {
               cout << "Job limit reached. Cannot add more jobs." << endl;
         }
    }
         void ListJobs() {
              if (jobCount == 0) {
                   cout << "No jobs available." << endl;
              } else {
                   for (int i = 0; i < jobCount; i++) {
                        jobs[i].displayJob();
                   }
              }
         }
       void searchJob (int id) {
       bool found = false;
       for (int i = 0; i < jobCount; i++) {
            if (job[i].getId() == id) {
                 job[i].displayJob();
                 found = true;
                 break;
            }
       }
       if (!found) 
            cout << "Job with ID " << id << " not found.\n ";
         }
         void searchJob (string title) {
              bool found = false;
              for (int i = 0; i < jobCount; i++) {
                   if (job[i].getTitle() == title) {
                        job[i].displayJob();
                        found = true;
                   }
              }
              if (!found) 
                   cout << "Job with title " << title << " not found.\n ";
         }
                   bool deleteJob (int id) {
                        for (int i = 0; i < jobCount; i++) {
                             if (job[i].getId() == id) {
                                  for (int j = i; j < jobCount - 1; j++) {
                                       job[j] = job[j + 1];
                                  }
                                  jobCount--;
                                  cout << "Job with ID " << id << " deleted successfully.\n ";
                                  found = true;
                                  break;
                             }
                        }
                        if (!found) 
                             cout << "Job with ID " << id << " not found. Deletion failed.\n ";
                        
                     }
         };
       