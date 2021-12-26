/**
* @file Node.cpp
* @description Dugum sinifinin constructor govdesinin dolduruldugu kisim.
* @course 2/A
* @assignment 1
* @date 24/10/2021
* @author Emirhan KAYA / Emirhan.kaya5@ogr.sakarya.edu.tr
*/

#include "Node.hpp"

Node::Node(const string &item, Node *next, Node* prev) {
    this->item = item;
    this->next = next;
    this->prev = prev;
}