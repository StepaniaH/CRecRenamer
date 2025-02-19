#include <stdio.h>
#include <string.h>

int rename_file(const char *old_name, const char *new_name);

int main(void) {
  char old_name[256], new_name[256];

  printf("Enter the current file name: ");
  fgets(old_name, sizeof(old_name), stdin);
  old_name[strcspn(old_name, "\n")] = '\0';

  printf("Enter the new file name: ");
  fgets(new_name, sizeof(new_name), stdin);
  new_name[strcspn(new_name, "\n")] = '\0';

  if (rename_file(old_name, new_name) == 0) {
    printf("File renamed successfully!\n");
  } else {
    printf("Failed to rename file.\n");
  }

  return 0;
}

int rename_file(const char *old_name, const char *new_name) {
  if (rename(old_name, new_name) == 0) {
    printf("File renamed: %s -> %s\n", old_name, new_name);
    return 0;
  } else {
    perror("Error renaming file");
    return -1;
  }
}
