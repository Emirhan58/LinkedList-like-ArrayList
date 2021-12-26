/**
* @file Node.hpp
* @description Dugum sinifinin header dosyasi. Icerisinde ileri, geri dugum pointerlari ve 1 adet isim verisini alan stringimiz var.
* @course 2/A
* @assignment 1
* @date 24/10/2021
* @author Emirhan KAYA / Emirhan.kaya5@ogr.sakarya.edu.tr
*/

#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
using namespace std;


class Node {
    public:
        string item;
        Node* next;
        Node* prev;
        Node(const string &item = string(), Node *next = NULL, Node *prev = NULL);
};

#endif