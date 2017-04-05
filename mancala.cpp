#include <stdio.h>
#include <stdlib.h>
#include <iostream>
class Board {
	int row_player1[6] = {4,4,4,4,4,4};
	int row_player2[6] = {4,4,4,4,4,4};
	int player1_store;
	int player2_store;
	public:
		void init();
		void draw();
		void move(int, int); 
};
void Board::init(){
	player1_store = 0;
	player2_store = 0;
}

void Board::draw(){
	std::cout << "Player 1: (" << player1_store << ")";
	for(int i = 0; i < 6; i++){
		std::cout << "[" << row_player1[i] << "]";
	};
	std::cout << "\n";
	std::cout << "Player 2:    ";
	for(int i = 0; i < 6; i++){
                std::cout << "[" << row_player2[i] << "]";
        };
	std::cout << "(" << player2_store << ")";
	std::cout << "\n";
}

int main(int argc, char* argv[]){
	Board b;
	b.init();
	b.draw();
}
