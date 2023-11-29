#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {
    cout << playlistTitle << " PLAYLIST MENU\n"
         << "a - Add song\n"
         << "d - Remove song\n"
         << "c - Change position of song\n"
         << "s - Output songs by specific artist\n"
         << "t - Output total time of playlist (in seconds)\n"
         << "o - Output full playlist\n"
         << "q - Quit\n\n";
    cout << "Choose an option: ";
}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
    // Implementation of ExecuteMenu will go here
    // You need to handle different menu options and return the updated headNode
}

int main() {
    string playlistTitle;
    cout << "Enter playlist's title: ";
    getline(cin, playlistTitle);

    PlaylistNode* headNode = nullptr; // Initialize the head node to nullptr

    char option;
    do {
        PrintMenu(playlistTitle);
        cin >> option;
        cin.ignore(); // Consume the newline character

        headNode = ExecuteMenu(option, playlistTitle, headNode);

    } while (option != 'q');

    return 0;
}
