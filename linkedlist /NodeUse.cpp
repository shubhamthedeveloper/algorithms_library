#include <iostream>
#include "Node.h"
using namespace std;

int lengthR(Node* head) {
	if (head == NULL) {
		return 0;
	}
	int smallLength = lengthR(head->next);
	return 1 + smallLength;
}

Node* bubbleSort(Node* head) {
	if (head == NULL) {
		return NULL;
	}
	int i = 0;
	int n = lengthR(head);
	while (i < n) {
		Node* current = head;
		Node* prev = NULL;
		int j = 0;
		while (j < n - 1 - i) {
			if (current->data > current->next->data) {
				//prev->next = current->next;
				//current->next = current->next->next;
				//prev->next->next = current;
				Node* cn = current->next;
				Node* cnn = cn->next;
				cn->next = current;
				current->next = cnn;
				if (prev != NULL) {
					prev->next = cn;
				} else {
					head = cn;
				}
				prev = cn;
			} else {
				prev = current;
				current = current->next;
			}
			j++;
		}
		i++;
	}
	return head;
}

class DoubleNode {
	public:
		Node* head;
		Node* tail;
};

Node* reverseI(Node* head) {
	Node* current = head;
	Node* prev = NULL;
	while (current != NULL) {
		Node* currentNext = current->next;
		current->next = prev;
		prev = current;
		current = currentNext;
	}
	return prev;
}

Node* reverse3(Node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	Node* smallOutput = reverse3(head->next);
	Node* tail = head->next;
	tail->next = head;
	head->next = NULL;
	return smallOutput;
}

DoubleNode* reverse2(Node* head) {
	if (head == NULL || head->next == NULL) {
		DoubleNode* output = new DoubleNode();
		output->head = head;
		output->tail = head;
		return output;
	}

	DoubleNode* smallOutput = reverse2(head->next);
	smallOutput->tail->next = head;
	head->next = NULL;
	smallOutput->tail = head;
	return smallOutput;
}

Node* reverse1(Node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	Node* smallOutput = reverse1(head->next);
	Node* tail = smallOutput;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = head;
	head->next = NULL;
	return smallOutput;
}


Node* insertR(Node* head, int position, int element) {
	if (position == 0)  {
		Node* node = new Node(element);
		node->next = head;
		return node;
	}

	Node* smallOutput = insertR(head->next, position - 1, element);
	head->next = smallOutput;
	return head;
}

Node* insert(Node* head, int position, int element) {
	if (position == 0)  {
		Node* node = new Node(element);
		node->next = head;
		return node;
	}

	int i = 1;
	Node* prev = head;
	while (i < position) {
		prev = prev->next;
		i++;
	}
	Node* node = new Node(element);
	node->next = prev->next;
	prev->next = node;
	return head;
}

int length(Node* head) {
	int count = 0;
	while (head != NULL) {
		head = head->next;
		count++;
	}
	return count;
}

Node* takeInput() {
/*	Node* first = new Node(10);
	Node* second = new Node(20);
	Node* third = new Node(30);

	first->next = second;
	second->next = third;
	return first;
	*/

	Node* head = NULL;
	Node* tail = NULL;

	int nextElement;
	cin >> nextElement;
	while (nextElement != -1) {
		Node* nextNode = new Node(nextElement);
		if (head == NULL) {
			head = nextNode;
			tail = nextNode;
		} else {
			//Node* tail = head;
			//while (tail->next != NULL) {
				//tail = tail->next;
			//}

			tail->next = nextNode;
			tail = nextNode;
		}
		cin >> nextElement;
	}
	return head;
}

void print(Node* head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << endl;
	/*
	temp = head;
	while(temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << endl;
	*/
}
/*
Node* insertAtI(Node* head, int position, int element) {

}

Node* getI(Node* head, int i) {

}

int sum (Node* head) {

}
*/
int main() {
	Node* head = takeInput();	
	print(head);
	cout << length(head) << endl;
	cout << lengthR(head) << endl;
	head = bubbleSort(head);
	print(head);
	delete head;

	/*
	while (head != NULL) {
		Node* temp = head->next;
		delete head;
		head = temp;
	}*/
}

