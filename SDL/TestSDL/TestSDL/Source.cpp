#include<bits/stdc++.h>
#include<SDL.h>
using namespace std;

#define SCREEN_WIDTH	1920
#define SCREEN_HEIGHT	1080

//declaration here:
SDL_Window* window = NULL;
SDL_Surface* mainSurface = NULL;
SDL_Surface* surface = NULL;

bool init() {
	bool success = true;
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL could not initialize!" << endl;
		cout << SDL_GetError();
		success = false;
	}
	else {
		window = SDL_CreateWindow("Woof", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL) {
			cout << "Window could not be created!" << endl;
			cout << SDL_GetError();
			success = false;
		}
		else {
			mainSurface = SDL_GetWindowSurface(window);
		}
	}

	return success;
}

bool Load() {
	bool success = true;
	surface = SDL_LoadBMP("C:/Users/Admin/Downloads/ditmendc1.bmp");
	if (surface == NULL) {
		success = false;
		cout << "Window could not be created" << endl;
		cout << SDL_GetError();
	}
	return success;
}

void close() {
	SDL_FreeSurface(surface);
	SDL_DestroyWindow(window);
	surface = NULL;
	window = NULL;
	SDL_Quit();
}


int main(int argc, char* argv[]) {
	if (!init()) {
		cout << "Failed to initialize.";
	}
	else {
		if (!Load()) {
			cout << "Failed to load media file.";
		}
		else {
			SDL_BlitSurface(surface, NULL, mainSurface, NULL);
			SDL_UpdateWindowSurface(window);
//			SDL_Delay(3000);
		}
	}
	SDL_Rect frame; //lower right
	frame.x = -1470;
	frame.y = -190;
	frame.w = 1920;
	frame.h = 1080;

	SDL_Rect frame2; //center
	frame2.x = -735;
	frame2.y = -95;
	frame2.w = 1920;
	frame2.h = 1080;

	bool quit = false;
	SDL_Event event;
	while (!quit) {
		int cnt;
		while (SDL_PollEvent(&event)) {
			switch (event.key.keysym.sym) {
				case SDLK_w: {
					close();
					quit = true;
				}
				case SDLK_d: {
//					SDL_FillRect(mainSurface, NULL, 0x000000); //clear old drawings
					SDL_BlitSurface(surface, &frame, mainSurface, NULL);
					SDL_BlitSurface(surface, &frame2, mainSurface, NULL);
					SDL_UpdateWindowSurface(window);
				}
			}
		}
	}
	

	return 0;
}

