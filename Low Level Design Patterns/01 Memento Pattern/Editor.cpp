#include<bits/stdc++.h>

class Editor {
private:
	string content;

public:
	EditorState createState() {
		return new EditorState(content);
	}

	void restoreState(EditorState state) {
		content = state->content;
	}

	// Getter
	string getContent() {
		return content;
	}

	// Setter
	void setContent(string content) {
		this->content = content;
	}
}