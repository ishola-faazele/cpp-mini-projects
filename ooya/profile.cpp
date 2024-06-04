#include <iostream>
#include "profile.hpp"

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns= "they/them")
: name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {

}

string Profile::viewProfile() {
    string bio = "Name: " + name;
    bio += "\nAge: " + to_string(age);
    bio += "\nPronouns: " + pronouns;
    string hobby_string = "Hobbies:\n";
    for (std::string hobby : hobbies) {
        hobby_string += " - " + hobby + "\n"; 
    }

    return bio + "\n" + hobby_string;
}

void Profile::addHobby(std::string new_hobby) {

  hobbies.push_back(new_hobby);

}