#include <iostream>
#include "TreeNode.h"
#include "../l18/QueueUsingArray.h"

using namespace std;

int numNodes(TreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	int count = 0;
	for (int i = 0; i < root->children.size(); i++) {
		count = count + numNodes(root->children.at(i));
	}
	return 1 + count;
}

TreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root Data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	QueueUsingArray<TreeNode<int>*> pendingNodes;
	pendingNodes.enqueue(root);
	while (!pendingNodes.isEmpty()) {
		TreeNode<int>* currentParent = pendingNodes.dequeue();
		int numChildren;
		cout << "Enter num of children of " << currentParent->data << endl;
		cin >> numChildren;
		for (int i = 0; i < numChildren; i++) {
			cout << "Enter " << i + 1 << "th child of ";
			cout << currentParent->data << endl; 
			int childData;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			pendingNodes.enqueue(child);
			currentParent->children.push_back(child);
		}	
	}
	return root;

}

// 1 3 2 0 3 2 5 0 6 0 4 0
TreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter root Data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	cout << "Enter num of children of " << rootData << endl;
	int numChildren;
	cin >> numChildren;
	for (int i = 0; i < numChildren; i++) {
		TreeNode<int>* nextChild = takeInput();
		root->children.push_back(nextChild);
	}
	return root;
}

void print(TreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++) {
		 TreeNode<int> * child = root->children.at(i);
		 cout << child->data << ",";
	}
	cout << endl;

	for (int i = 0; i < root->children.size(); i++) {
		TreeNode<int> * child = root->children.at(i);
		print(child);
	}
}

int main() {
	TreeNode<int>* root = takeInputLevelWise();	
	print(root);
	delete root;
}

