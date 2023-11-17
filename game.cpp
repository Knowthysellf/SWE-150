#include<iostream>
#include"inc/SDL.h"
#include<vector>
using namespace std;

#undef main

const int ScreenWidth=600;
const int ScreenHeight=400;
const int CellSize=20;

SDL_Window* window =nullptr;
SDL_Renderer* render=nullptr;

struct Snake{
    int x,y;
};
vector<Snake>snake;
int main(int argc, char* args[]){

    SDL_Init(SDL_INIT_EVERYTHING);

    window=SDL_CreateWindow("Snake Game",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
                            ScreenWidth,ScreenHeight,SDL_WINDOW_SHOWN);

    render=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    snake.push_back({ScreenWidth/3,ScreenHeight/3});
    

}