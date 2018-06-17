int compare_names(const void* a, const void* b) {
  //a string is a pointer to a char so the pointers given are pointers to pointers
  char** sa = (char**)a;
  char** sb = (char**)b;
  //use * to find actual string values
  return strcmp(*sa, *sb);
}

int compare_names_desc(const void* a, const void* b) {
  return compare_names(b, a); // -compare_names(a,b) would have worked too
}
