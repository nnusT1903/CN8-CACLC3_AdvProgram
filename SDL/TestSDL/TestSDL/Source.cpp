#include<bits/stdc++.h>
#include<SDL.h>
using namespace std;

#define SCREEN_WIDTH	1920
#define SCREEN_HEIGHT	1080
#define N				NULL
#define maxn			100005

//declaration here:
enum KeyPressed {
	Key_Pressed_Surface_default,
	Key_Pressed_Surface_up,
	Key_Pressed_Surface_down,
	Key_Pressed_Surface_left,
	Key_Pressed_Surface_right,
	Key_Pressed_Surface_total
};
SDL_Window* window = N;
SDL_Surface* mainSurface = N;
SDL_Surface* surface = N;
SDL_Surface* KeySurfaces[Key_Pressed_Surface_total];
SDL_Surface* currentSurface = N;

//declaration p2:
string path[32];

bool init() {
	bool success = true;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
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

SDL_Surface* loadSurface(char* path) {
	SDL_Surface* tempSurface = NULL;
	tempSurface = SDL_LoadBMP(path);
	if (tempSurface == NULL) {
		cout << "Picture could not be loaded." << endl;
		cout << SDL_GetError();
	}
	return tempSurface;
}


bool Load() {
	bool success = true;
	string path[5] = {	"C:/Users/Admin/Downloads/ditmendc1.bmp",
						"C:/Users/Admin/Downloads/vailonSDL.bmp",
						"C:/Users/Admin/Downloads/flolontilo.bmp",
						"C:/Users/Admin/Downloads/flolontilo.bmp", 
						"C:/Users/Admin/Downloads/vailonSDL.bmp"};


	for (int i = 0; i < 5; i++) {
		const int sz = path[i].length();
		char temp[101];
		strcpy_s(temp, path[i].c_str());

		
		KeySurfaces[i] = loadSurface(temp);
		if (KeySurfaces[i] == NULL) {
			cout << "Failed to load up image." << endl;
			success = false;
			break;
		}
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
	bool quit = false;
	SDL_Event event;
	currentSurface = KeySurfaces[Key_Pressed_Surface_default];
	if (!init()) {
		cout << "Failed to initialize.";
		close();
		return 0;
	}

	if (!Load()) {
		cout << "Failed to load media file.";
		close();
		return 0;
	}
	while (!quit) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
			else if (event.type == SDL_KEYDOWN) {
				switch (event.key.keysym.sym) {
				case SDLK_x:
					quit = true;

				case SDLK_UP:
					currentSurface = KeySurfaces[Key_Pressed_Surface_up];
					break;

				case SDLK_DOWN:
					currentSurface = KeySurfaces[Key_Pressed_Surface_down];
					break;

				case SDLK_LEFT:
					currentSurface = KeySurfaces[Key_Pressed_Surface_left];
					break;

				case SDLK_RIGHT:
					currentSurface = KeySurfaces[Key_Pressed_Surface_right];
					break;

				case SDLK_w:
					currentSurface = KeySurfaces[Key_Pressed_Surface_default];
				}
			}
			SDL_FillRect(mainSurface, N, 0x000000);
			SDL_BlitSurface(currentSurface, NULL, mainSurface, NULL);
			SDL_UpdateWindowSurface(window);
		}
	}
	close();

	return 0;
}

