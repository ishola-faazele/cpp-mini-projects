#include <iostream>
#include <vector>
using namespace std;

class Profile
{
private:
    /* data */
    string name, city, country, pronouns;
    int age;
    vector<string> hobbies;

public:
    /*functions*/
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns);
    // ~Profile();
    string viewProfile();
    void addHobby(string);
};


