package javaalgo;

import java.util.Scanner;

public class Solution_2071 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for (int i = 1; i <= t; i++) {
			double sum = 0.0;
			for (int j = 0; j < 10; j++) {
				int n = sc.nextInt();
				sum += n;
			}
			sum /= 10;
			sum += 0.5;	
			System.out.println("#" + i + " " + (int)sum);
		}
	}

}
