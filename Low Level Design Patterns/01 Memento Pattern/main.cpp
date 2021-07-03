#include<bits/stdc++.h>
#include<./Editor.cpp/Editor>
#include<EditorState>
#include<History>
using namespace std;

int main() {
	Editor ed = new Editor();
	History history = new History();

	// Set the content and save the state
	ed.setContent("Hello");
	history.push(ed.createState());

	ed.setContent("Yellow");
	history.push(ed.createState());

	ed.setContent("Nacho");
	history.push(ed.restoreState());

	cout << ed.getContent(); // This will give us output -> Nacho
}


// *** Memento Pattern *** //
// Memento pattern is used to implement "UNDO" application.

// Suppose we have a class called Editor.
// We add some content to the editor
// ed.addContent("a");
// ed.addContent("B");
// ed.addContent("c");

// ed.undo();
// We did undo at the end. We want to implement this.

// 1. Approach -
// We