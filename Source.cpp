#include <allegro5\allegro.h>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	al_init();
	ALLEGRO_DISPLAY *display = NULL;

	display = al_create_display(600, 600);

	srand(time(NULL));
	while (1) {
		al_clear_to_color(al_map_rgb(rand(), rand(), rand()));
		al_flip_display();
		system("pause");

}
	

	al_destroy_display(display);
	return 0;

}