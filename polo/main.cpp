#include <iostream>
#include <cstdlib>
#include <ctime>

void progressiveDisplay(const std::string &text, int delay = 10000000) {
    for (char c : text) {
        std::cout << c << std::flush;
        for (volatile int i = 0; i < delay; i++); // Attente avec une boucle vide
    }
    std::cout << std::endl;
}

std::string generateSerial() {
    std::string serial = "V";
    for (int i = 0; i < 9; ++i) serial += std::to_string(rand() % 10);
    serial += "-";
    for (int i = 0; i < 3; ++i) serial += (char)('A' + rand() % 26);
    serial += "-";
    for (int i = 0; i < 10; ++i) serial += std::to_string(rand() % 10);
    serial += "-XN";
    serial += std::to_string(rand() % 10000);
    return serial;
}

void displayHeader() {
    std::cout << "+---------------------------------------------------------------------------+\n";
    std::cout << "|                                                                            |\n";
    std::cout << "|                                  discord.gg/cryxalow                       |\n";
    std::cout << "+---------------------------------------------------------------------------+\n";
}

void randomizeSerials() {
    displayHeader();
    std::cout << "\nInitializing the SMBIOS interface.  Please wait a moment......\n\n";

    for (int i = 0; i < 100000000; i++); // Attente simulée

    std::cout << "ERR_DMI_READ_ONLY\nd7 - Error: DMI Data write failed.\n\n";
    displayHeader();

    for (int i = 0; i < 5; ++i) {
        std::cout << "Initializing the SMBIOS interface.  Please wait a moment......\n";
        std::cout << "          Name              R/W  Status  Information\n";
        std::cout << "--------------------------  ---  ------  ----------------------------------\n";
        std::cout << "(/SS)System Serial number    W    Done   \"" << generateSerial() << "\"\n\n";
        displayHeader();

        for (int j = 0; j < 100000000; j++); // Pause simulée
    }
    std::cout << "\ndone.\nplease restart pc :3\n";
    progressiveDisplay("made by conspiracy");
    std::cout << "free in discord.gg/vixen\npress any key to exit";
    std::cin.ignore();
    std::cin.get();
}

int main() {
    srand(time(0));
    char choice;
    std::cout << "Would you like to randomize serials ? If no, it makes them Default String/OEM filled. (y/n): ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::cout << "randomizing.\n";
        randomizeSerials();
    } else {
        std::cout << "Default String/OEM filled.\n";
    }
    
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}
