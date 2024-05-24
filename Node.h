#pragma once

#include "Contact.h"

struct Node {
    Contact contact;
    Node* next;
    Node* prev;
};
