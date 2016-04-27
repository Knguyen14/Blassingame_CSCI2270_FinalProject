#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>

struct HashElem{
	std::string title;
	int year;
	HashElem *next;
    HashElem *previous;

	HashElem(){};
	HashElem(std::string in_title, int in_year)
	{
		title = in_title;
		year = in_year;
		next = NULL;
		previous = NULL;
	}

};

struct MovieNode{
    int ranking;
    std::string title;
    int year;
    int quantity;
    MovieNode *parent;
    MovieNode *leftChild;
    MovieNode *rightChild;

    MovieNode(){};

    MovieNode(int in_ranking, std::string in_title, int in_year, int in_quantity)
    {
        ranking = in_ranking;
        title = in_title;
        year = in_year;
        quantity = in_quantity;
    }

};

class HashTable
{
	public:
		HashTable();
		~HashTable();
		void initializeTable();
		void printTableContents();
		void insertMovie(std::string name, int year);
		void deletehashMovie(std::string name);
		void findhashMovie(std::string name);



		void printMovieInventory();
        void addMovieNode(int ranking, std::string title, int releaseYear, int quantity);
        void findMovie(std::string title);
        void rentMovie(std::string title);
        void postOrder();
        void countMovies();
        void deleteMovie(std::string title);
        MovieNode *treeMin(MovieNode *node);
	private:
		int hashSum(std::string x, int s);
		int tableSize = 10;
		HashElem* hashTable[10];



		void printMovieInventory(MovieNode * node);
        MovieNode* search(std::string title);
        MovieNode *root;
        void postOrder(MovieNode *node);
        void countMovies(MovieNode *node);
        int movieCounter;

};

#endif // CLASS_H
