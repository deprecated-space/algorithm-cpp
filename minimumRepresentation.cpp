int Min_pos(char *s, int len) {
  int i = 0, j = 1, k = 0;

  while (i < len && j < len && k < len) {
    int t = s[(i + k) % len] - s[(j + k) % len];

    if (!t)
      k++;
    else {
      if (t > 0)
        i += k + 1;  // 最大表示改这里的符号
      else
        j += k + 1;

      if (i == j)
        j++;

      k = 0;
    }
  }

  return i < j ? i : j;
}
