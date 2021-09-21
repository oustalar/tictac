using namespace std; 
//#include <bits/stdc++.h> 
#include <iostream>


char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};

char player = 'X';


void draw(){
    for(int i = 0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void input(){
    int pos;
    cout << "enter a number" << endl;
    cin >> pos;

    if(pos == 1)
        matrix[0][0] = player;
    else if (pos == 2)
        matrix[0][1] = player;
    else if (pos == 3)
        matrix[0][2] = player;
    else if (pos == 4)
        matrix[1][0] = player;
    else if (pos == 5)
        matrix[1][1] = player;
    else if (pos == 6)
        matrix[1][2] = player;
    else if (pos == 7)
        matrix[2][0] = player;
    else if (pos == 8)
        matrix[2][1] = player;
    else if (pos == 9)
        matrix[2][2] = player;
    
}

void toggle(){
    if(player == 'X')
        player = 'O';
    else 
        player = 'X';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    draw();
    input();
    return 0;
} 
