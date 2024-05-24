#include "PhoneBook.h"
#include <iostream>

using namespace std;

PhoneBook::PhoneBook() : head(NULL) {}

PhoneBook::~PhoneBook() {
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = NULL;
}

void PhoneBook::addContact(const Contact& newContact) {
    Node* newNode = new Node;
    newNode->contact = newContact;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void PhoneBook::displayContacts() {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Name: " << temp->contact.firstName << " " << temp->contact.lastName << endl;
        cout << "Mobile Number: " << temp->contact.mobileNumber << endl;
        cout << "Home Number: " << temp->contact.homeNumber << endl;
        cout << "Work Number: " << temp->contact.workNumber << endl;
        cout << "Email: " << temp->contact.email << endl << endl;
        temp = temp->next;
    }
}

bool PhoneBook::searchContacts(const string& searchTerm) {
    Node* temp = head;
    bool found = false;
    while (temp != NULL) {
        if (temp->contact.firstName == searchTerm || temp->contact.lastName == searchTerm ||
            temp->contact.mobileNumber == searchTerm || temp->contact.homeNumber == searchTerm ||
            temp->contact.workNumber == searchTerm || temp->contact.email == searchTerm) {
            cout << "Name: " << temp->contact.firstName << " " << temp->contact.lastName << endl;
            cout << "Mobile Number: " << temp->contact.mobileNumber << endl;
            cout << "Home Number: " << temp->contact.homeNumber << endl;
            cout << "Work Number: " << temp->contact.workNumber << endl;
            cout << "Email: " << temp->contact.email << endl << endl;
            found = true;
            return true;
        }
        temp = temp->next;
    }
    if (!found) {
        cout << "No contacts found matching the search term." << endl;
        return false;
    }
}

void PhoneBook::deleteContact(const string& searchTerm) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->contact.firstName == searchTerm || temp->contact.lastName == searchTerm ||
            temp->contact.mobileNumber == searchTerm || temp->contact.homeNumber == searchTerm ||
            temp->contact.workNumber == searchTerm || temp->contact.email == searchTerm) {
            if (temp == head) {
                head = temp->next;
            }
            else {
                temp->prev->next = temp->next;
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
            }
            delete temp;
            cout << "Contact deleted successfully." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "No contacts found matching the search term. Deletion failed." << endl;
}

void PhoneBook::editContact(const string& searchTerm, const Contact& updatedContact) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->contact.firstName == searchTerm || temp->contact.lastName == searchTerm ||
            temp->contact.mobileNumber == searchTerm || temp->contact.homeNumber == searchTerm ||
            temp->contact.workNumber == searchTerm || temp->contact.email == searchTerm) {
            temp->contact = updatedContact;
            cout << "Contact updated successfully." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "No contacts found matching the search term. Edit failed." << endl;
}

Node* PhoneBook::getHead() const {
    return head;
}
