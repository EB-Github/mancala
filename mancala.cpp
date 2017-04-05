#include <stdio.h>
#include <stdlib.h>
class Board {
	int row_player1[6] = {4,4,4,4,4,4};
	int row_player2[6] = {4,4,4,4,4,4};
	int player1_store;
	int player2_store;
	public:
		void init();
		void draw(); 
};
void Board::init(){
	player1_store = 0;
	player2_store = 0;
}

void Board::draw(){

}
int main(int argc, char* argv[]){
	
}
