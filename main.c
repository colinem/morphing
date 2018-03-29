#include <MLV/MLV_all.h>
#include "view.c"

int main (int argc, char* argv[]) {

	if (argc < 3) {
		printf("\nVeuillez entrer en arguments les chemins d'acces aux images.\n\n");
		return 0;
	}

	int x, y;
	MLV_create_window("Morphing", "Morphing", 1020, 650);
	display_images(argv[1], argv[2]);
	display_buttons();

	while(1) {



		MLV_actualise_window();
		MLV_wait_mouse(&x, &y);
	}

	return 0;
}
