package javaalgo;

import java.util.Scanner;

public class solution_2072 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			int sum = 0;
			for (int j = 0; j < 10; j++) {
				int n = sc.nextInt();
				if (n % 2 == 1) {
					sum += n;
				}
			}
			System.out.println("#" + i + 1 + " " + sum);
		}
	}
}
