package javaalgo;

import java.util.Scanner;

public class Solution_2070 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for (int i = 1; i <= t; i++) {
			int a, b;

			a = sc.nextInt();
			b = sc.nextInt();
			System.out.print("#" + i + " ");
			if (a < b) {
				System.out.println("<");
			} else if (a > b) {
				System.out.println(">");
			} else if (a == b) {
				System.out.println("=");
			}
		}
	}
}
