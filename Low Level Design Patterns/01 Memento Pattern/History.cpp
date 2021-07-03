#include <bits/stdc++.h>
#include <EditorState>
#include <Editor>

class History {
private:
	list<EditorState> states;

public:
	void push(EditorState state) {
		states.push_back(state);
	}

	EditorState pop() {
		EditorState lastState = states.back();
		states.pop_back();

		return lastState;
	}
}