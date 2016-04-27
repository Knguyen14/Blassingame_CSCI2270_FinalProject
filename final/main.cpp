/*
this is the main function. when you run this program, you should get the menu you see below. 
enter the number that corresponds with the menu option that you would like to choose.
each menu option uses a different function that is defined in class.cpp.
*/

#include <iostream>
#include "class.h"

int main()
{
    HashTable table;
    HashTable tree;

    table.initializeTable();
    int menu_choice;
    std::cout << "======Main Menu======" << std::endl;
    std::cout << "1. Insert movie into hash table" << std::endl;
    std::cout << "2. Delete movie from hash table" << std::endl;
    std::cout << "3. Find movie in hash table" << std::endl;
    std::cout << "4. Print hash table contents" << std::endl;
    std::cout << "5. Add a movie to tree" << std::endl;
    std::cout << "6. Find a movie in tree" << std::endl;
    std::cout << "7. Rent a movie in tree" << std::endl;
    std::cout << "8. Print the inventory from tree" << std::endl;
    std::cout << "9. Delete a movie from tree" << std::endl;
    std::cout << "10. Count the movies in tree" << std::endl;
    std::cout << "11. Quit" << std::endl;
    std::cin >> menu_choice;
    while (menu_choice != 11) {
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
            table.deletehashMovie(delete_title);
        }
        else if (menu_choice == 3) {
            std::string find_title;
            std::cout << "Enter title:" << std::endl;
            std::cin.ignore();
            getline(std::cin, find_title);
            table.findhashMovie(find_title);
        }
        else if (menu_choice == 4) {
            table.printTableContents();
        }
        else if (menu_choice == 5) {
            std::string tree_title;
            int tree_year;
            std::cout << "title: " << std::endl;
            std::cin.ignore();
            getline(std::cin, tree_title);
            std::cout << "year: " << std::endl;
            std::cin >> tree_year;
            tree.addMovieNode(1, tree_title, tree_year, 1);
        }
        else if (menu_choice == 6) {
            std::cout << "Enter title:" << std::endl;
            std::string user_title_find;
            std::cin.ignore();
            getline(std::cin, user_title_find);
            tree.findMovie(user_title_find);
        }
        else if (menu_choice == 7) {
            std::cout << "Enter title:" << std::endl;
            std::string user_title_rent;
            std::cin.ignore();
            getline(std::cin, user_title_rent);
            tree.rentMovie(user_title_rent);
        }
        else if (menu_choice == 8) {
            tree.printMovieInventory();
        }
        else if (menu_choice == 9) {
            std::cout << "Enter title:" << std::endl;
            std::string user_title_delete;
            std::cin.ignore();
            getline(std::cin, user_title_delete);
            tree.deleteMovie(user_title_delete);

        }
        else if (menu_choice == 10) {
            tree.countMovies();
        }
        std::cout << "======Main Menu======" << std::endl;
        std::cout << "1. Insert movie into hash table" << std::endl;
        std::cout << "2. Delete movie from hash table" << std::endl;
        std::cout << "3. Find movie in hash table" << std::endl;
        std::cout << "4. Print hash table contents" << std::endl;
        std::cout << "5. Add a movie to tree" << std::endl;
        std::cout << "6. Find a movie in tree" << std::endl;
        std::cout << "7. Rent a movie in tree" << std::endl;
        std::cout << "8. Print the inventory from tree" << std::endl;
        std::cout << "9. Delete a movie from tree" << std::endl;
        std::cout << "10. Count the movies in tree" << std::endl;
        std::cout << "11. Quit" << std::endl;
        std::cin >> menu_choice;
    }
    std::cout << "Goodbye!" << std::endl;
    tree.postOrder();
}
