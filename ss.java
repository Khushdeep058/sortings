import java.util.Arrays;
class Main {
  static void selectionSort(int array[]) {
    int s = array.length;
    for (int i = 0; i < s - 1; i++) {
      int small = i;
      for (int j = i + 1; j < s; j++) {
        if (array[j] < array[small]) {
          small = j;
        }
      }
      int temp = array[small];
      array[small] = array[i];
      array[i] = temp;
    }
  }
  public static void main(String args[]) {
    int[] arr = { 10, 7, 8, 9, 1, 5 };
    Main.selectionSort(arr);
    System.out.println("Sorted Array:");
    System.out.println(Arrays.toString(arr));
  }
}
