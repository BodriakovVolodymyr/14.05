#pragma once	
#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Node {
public:
	T info;
	Node* next;

	Node(T value) { info = value; next = nullptr; }
	void show()const {
		cout << "INFO: " << info << endl;
		cout << "\tNEXT: " << next<< endl;
	}


};


template<typename U>
class List {
	Node<U>* head;
	Node<U>* tail;
public:
	List() { head = tail = nullptr; }



	void push_back(U value) {
		//1 create 
		Node<U>* item = new Node<U>(value);

		//2 if this first item in list

		if (head == nullptr)
		{
			head = tail = item;
		}
		else
		{
			// if not first item in list
			tail->next = item;
			tail = item;
		}
		
	}
	void showList()
	{
		Node<U>* p = head;
		while (p != nullptr) {
			cout << p->info << " ";
			p = p->next;
		}
	}
};


template<typename T>
class DNode {
public:
	T info;
	DNode* prev;
	DNode* next;

	

	DNode(T value) { info = value; next = prev = nullptr; }

	void show()const {
		cout << "INFO: " << info << endl;
		cout << "\tPREV: " << prev<< endl;
		cout << "\tNEXT: " << next << endl;

	}
};


template <typename U>
class DList {
	DNode<U>* head;
	DNode<U>* current;
public:
	DList() { head = nullptr; current = nullptr; }
	~DList() {
		DNode<U>* p= head;
		if (p == nullptr) return;
		if (p->next == nullptr) {
			delete p;
			head = current = nullptr;
		}
		else {
			
			while (p->next != nullptr)
			{
				p = p->next;
				cout << "DELETED: " << p->prev->info << endl;
				delete p->prev;
				
			}
			cout << "DELETED: " << p->info << endl;
			delete p;
		}
	}
	void push_back(U value) { //Добавлення нового вузла в кінець списку	
	//1 create new item
		DNode<U>* item = new DNode<U>(value);
		//2 is first item in list?

		if (head == nullptr || current == nullptr)
		{
			head = current = item;
		}
		else {
		//3 not first item
			current->next = item;
			item->prev = current;

			current = item;
		}
	}
	void show() {//Виведення списку на екран
		DNode<U>* p = head;
		while (p!= nullptr)
		{
			cout << p->info << " ";
			p = p->next;
		}
		cout << endl;
	}
	void show_reverse() {
		DNode<U>* p = current;
		while (p!= nullptr)
		{
			cout << p->info << " ";
			p = p->prev;
		}
		cout << endl;
	}
	DNode<U>* search(U value) { //Пошук вузла із заданим значенням
		DNode<U>* p = head;
		while (p != nullptr) {
			if (p->info == value) {
				return p;
			}
			p = p->next;
		}
		return nullptr;
	}



};
