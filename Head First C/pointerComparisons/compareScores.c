int compare_scores(const void* score_a, const void* score_b) {
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return a - b;
}

int compare_scores_desc(const void* score_a, const void* score_b) {
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return b - a;
}
