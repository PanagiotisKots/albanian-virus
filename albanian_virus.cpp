#include <windows.h>

int main() {
   
    const char* message = "Hi, I am an Albanian virus but because of poor technology in my country unfortunately I am not able to harm your computer.\n"
                          "Please be so kind to delete one of your important files yourself and then forward me to other users.\n"
                          "Many thanks for your cooperation! Best regards, Albanian virus.";

    // Infinite loop to continuously display the message box
    while (true) {
        // Display the pop-up message with "Yes", "No", and "Cancel" buttons
        int response = MessageBox(
            NULL,                           // No owner window
            message,                        // Full message text
            "Virus Alert!",                 // Title of the message box
            MB_YESNOCANCEL | MB_ICONERROR | MB_SYSTEMMODAL // Yes, No, Cancel buttons, error icon, system modal
        );

        // Handle the response 
        if (response == IDYES) {
            // User clicked Yes (do nothing or add any custom logic here)
        } else if (response == IDNO) {
            // User clicked No (optional logic here)
        } else if (response == IDCANCEL) {
            // User clicked Cancel, exit the loop (terminate the program)
            break;
        }
    }

    return 0;
}
