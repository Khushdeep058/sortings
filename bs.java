import java.util.Arrays;
class Main {
  static void bubbleSort(int array[]) 
  {
    int s = array.length;
      for (int i = 0; i < s - 1; i++)
      for (int j = 0; j < s - i - 1; j++)
        if (array[j] > array[j + 1]) 
        {
          int temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
        }
    }
  public static void main(String args[]) 
  {
    int[] arr = { 10, 7, 8, 9,1,5 };
    Main.bubbleSort(arr);
    System.out.println("Sorted Array:");
    System.out.println(Arrays.toString(arr));
  }
}