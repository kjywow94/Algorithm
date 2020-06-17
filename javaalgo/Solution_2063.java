package javaalgo;

import java.util.Arrays;
import java.util.Scanner;

public class Solution_2063 {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		int t = sc.nextInt();
		int[] array = new int[t];
		for(int i = 0; i<t; i++){
			array[i] = sc.nextInt();
		}
		
		Arrays.sort(array);
		
		System.out.println(array[t/2]);
	}

}
