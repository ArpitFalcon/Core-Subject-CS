#include<bits/stdc++.h>

class EditorState {
private:
	// Content of that particular state
	string content;

public:
	// Constructor
	EditorState(string content) {
		this->content = content;
	}

	// Getter method
	string getContent() {
		return content;
	}
}