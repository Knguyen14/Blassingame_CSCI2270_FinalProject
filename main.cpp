#include <iostream>
#include "HashTable.h"

int main()
{
    HashTable table;
    table.initializeTable();
    int menu_choice;
    std::cout << "======Main Menu======" << std::endl;
    std::cout << "1. Insert movie" << std::endl;
    std::cout << "2. Delete movie" << std::endl;
    std::cout << "3. Find movie" << std::endl;
    std::cout << "4. Print table contents" << std::endl;
    std::cout << "5. Quit" << std::endl;
    std::cin >> menu_choice;
    while (menu_choice != 5) {
        if (menu_choice == 1) {
            std::string title1;
            int year;
            std::cout << "Enter title:" << std::endl;
            std::cin.ignore();
            getline(std::cin, title1);
            std::cout << "Enter year:" << std::endl;
            std::cin >> year;
            table.insertMovie(title1, year);
        }
        else if (menu_choice == 2) {
            std::string delete_title;
            std::cout << "Enter title:" << std::endl;
            std::cin.ignore();
            getline(std::cin, delete_title);
            table.deleteMovie(delete_title);
        }
        else if (menu_choice == 3) {
            std::string find_title;
            std::cout << "Enter title:" << std::endl;
            std::cin.ignore();
            getline(std::cin, find_title);
            table.findMovie(find_title);
        }
        else if (menu_choice == 4) {
            table.printTableContents();
        }
        std::cout << "======Main Menu======" << std::endl;
        std::cout << "1. Insert movie" << std::endl;
        std::cout << "2. Delete movie" << std::endl;
        std::cout << "3. Find movie" << std::endl;
        std::cout << "4. Print table contents" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cin >> menu_choice;
    }
    std::cout << "Goodbye!" << std::endl;
}
