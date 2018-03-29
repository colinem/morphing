#include <MLV/MLV_all.h>

void display_images(char* img1, char* img2) {
	MLV_Image *image1 = MLV_load_image(img1);
	MLV_Image *image2 = MLV_load_image(img2);
	MLV_resize_image_with_proportions(image1, 300, 300);
	MLV_resize_image_with_proportions(image2, 300, 300);
	MLV_draw_image(image1, 30, 60);
	MLV_draw_image(image2, 690, 60);
}

void display_buttons() {

}
