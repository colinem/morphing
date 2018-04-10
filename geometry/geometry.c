#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

#define BASIC_COLOR MLV_COLOR_WHITE

/*
révision structure :
tab tous les x;
tab tous les y;

tab qui contient les deux tab
index = identifiant du point

triangle = 3 index;
*/

typedef struct {
    int x; /* Abscisses */
    int y; /* Ordonnées */
    /*int isConnected; 	pour voir si le point est laissé
    					seul*/
} point ;

/*typedef struct {     liste de point
	
};*/

typedef struct {
	point pt1;
	point pt2;
	point pt3;
} triangle ;

/*
nécessite fonction pour calculer les longueurs entre
les points
*/

point* create_point(int x, int y) {
	point* new_point = (point*) malloc (sizeof(point));
	new_point->x = x;
	new_point->y = y;
	return new_point;
}

void display_point(point* pt) {
	printf("%d %d \n", pt->x, pt->y);
	MLV_draw_point ( pt->x, pt->x, BASIC_COLOR );
}

void create_tab() {

}

int main() {
	/*int x, y;*/
	MLV_create_window("Morphing - Graphics", "Morphing - Graphics", 800, 600);
	
	point* p1 = create_point(25, 25);

	display_point(p1);

	int tabx[3] = {100, 150, 200};
	int taby[3] = {250, 30, 120};
	int* tab[2] = {tabx, taby};

	MLV_draw_polygon(tab[0], tab[1], 3, BASIC_COLOR) ;

	MLV_actualise_window();
	
	MLV_wait_seconds(10);

	MLV_free_window();
    return 0;
}