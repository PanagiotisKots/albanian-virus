#include <windows.h>  // For MessageBox and other Windows API functions
#include <cstdlib>    // For rand and srand
#include <ctime>      // For time

int main() {
    srand(time(0)); // Seed for random positioning of windows

    // The full Albanian Virus message
    const char* message = "Hi, I am an Albanian Virus.\n\n"
                          "As you may have already guessed, I don't have advanced technology.\n"
                          "So please delete a folder on your hard disk manually and send me to everyone you know.\n\n"
                          "Thank you for your cooperation.";

    while (true) {
        // Randomize the window position coordinates
        int xPos = rand() % 800;
        int yPos = rand() % 600;

        // Display the pop-up message with the full text
        MessageBox(
            NULL,                           // No owner window
            message,                        // Full message text
            "Albanian Virus",               // Message box title
            MB_OK | MB_ICONERROR | MB_SYSTEMMODAL // OK button, error icon, system modal
        );

        // Optional: Move the pop-up to a random position
        HWND hWnd = FindWindow(NULL, "Albanian Virus");
        if (hWnd) {
            MoveWindow(hWnd, xPos, yPos, 400, 200, TRUE); // Reposition window
        }
    }

    return 0;
}
