// // Java program to merge two array 
// // using System.arraycopy() method
// import java.util.Arrays;

// public class Geeks {
//     public static void main(String[] args) {

//         int[] arr1 = { 10, 20, 30, 40 };
//         int[] arr2 = { 50, 60, 70, 80 };

//         // determines length of both arrays
//         int a1 = arr1.length;
//         int b1 = arr2.length;

//         // resultant array size
//         int c1 = a1 + b1;

//         // create the resultant array
//         int[] c = new int[c1];

//         // using the pre-defined function arraycopy
//         System.arraycopy(arr1, 0, c, 0, a1);
//         System.arraycopy(arr2, 0, c, a1, b1);

//         System.out.println("" + Arrays.toString(c));
//     }
// }