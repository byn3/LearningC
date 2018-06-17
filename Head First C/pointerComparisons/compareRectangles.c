typedef struct {
  int width;
  int height;
} rectangle;

int compare_areas(const void* a, const void* b) {
  //convert pointers to correct type
  rectangle* ra = (rectangle*)a;
  rectangle* rb = (rectangle*)b;
  //calculate areas
  int area_a = (ra->width * ra->height);
  int area_b = (rb->width * rb->height);
  //subtraction trick
  return area_a - area_b;
}

int compare_areas_desc(const void* a, const void* b) {
  return compare_areas(b, a); // -compare_areas(a, b) works too
}
