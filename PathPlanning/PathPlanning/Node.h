#pragma once
#include <vector>
// A node in a graph.
// @author Tianhua Zhao
class Node
{

public:
	//ctor
	Node();
	Node(int, int, Node*, int, int);

	// accessors
	// get the g value;
	int get_g() const;
	// get the h value;
	int get_h() const;
	// get the f value;
	int get_f() const;
	// get the parent node pointer;
	Node* get_parent() const;
	// get the x coordinate
	int get_x() const;
	// get the y coordinate
	int get_y() const;

	// mutators
	// set the g value;
	void set_g(int);
	// set the h value;
	void set_h(int);
	// set the parent pointer
	void set_parent(Node*);
	// set the location: x, y coordinates
	void set_location(int, int);

	// comparators
	bool operator< (const Node &);

private:

	int g_ = 0;
	int h_ = 0;
	int f_ = 0;
	Node* parent_ = nullptr;
	int x_;
	int y_;
};
