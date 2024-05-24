#pragma once

#include "Node.h"

class PhoneBook {
private:
    Node* head;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact(const Contact& newContact);
    void displayContacts();
    bool searchContacts(const std::string& searchTerm);
    void deleteContact(const std::string& searchTerm);
    void editContact(const std::string& searchTerm, const Contact& updatedContact);
    void sortContacts(const std::string& SortCriterion);
    Node* getHead() const;
};
